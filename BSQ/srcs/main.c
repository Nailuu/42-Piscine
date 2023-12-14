/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:53:37 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/12 18:50:21 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "print.h"
#include "solution.h"
#include "read.h"
#include "validate.h"
#include <stdlib.h>

void	no_args(void)
{
	int		r;
	int		c;
	char	p[2];
	char	*buffer;

	buffer = read_stdin(".stdin.tmp");
	if (buffer == NULL)
		return ;
	if (check_map(buffer, &r, &c, p))
		solution(buffer, r, c, p);
	else
		print_map_error();
	free_file_buffer(buffer);
}

void	multiple_args(int argc, char *argv[])
{
	int		r;
	int		c;
	int		i;
	char	p[2];
	char	*buffer;

	i = 1;
	while (i < argc)
	{
		buffer = read_file(argv[i]);
		if (buffer == NULL)
			return ;
		if (check_map(buffer, &r, &c, p))
			solution(buffer, r, c, p);
		else
			print_map_error();
		i++;
	}
	free_file_buffer(buffer);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		no_args();
	else if (argc > 1)
		multiple_args(argc, argv);
	return (0);
}
