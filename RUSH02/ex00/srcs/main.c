/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:57:30 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/10 17:50:17 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "struct.h"
#include "print.h"
#include "parse.h"
#include "convert.h"
#include "validate.h"
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	t_Node	**head;
	int		parsing;

	head = s_init();
	if ((argc == 2 || argc == 3) && head != NULL)
	{
		if (ft_check_num(argv[argc - 1]) == 0)
			print_error();
		else
		{
			if (argc == 2)
				parsing = parse_dict(0, "numbers.dict", head);
			else
				parsing = parse_dict(0, argv[1], head);
			if (parsing < 0)
				print_parse_error();
			else
				convert(head, argv[argc - 1], 0, 0);
		}
	}
	s_free(head);
	return (0);
}
