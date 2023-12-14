/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:19:58 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/07 16:56:33 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
		ft_args(argv);
	else
	{
		while (i < argc)
		{
			if (ft_read(argv[i]) == 0)
			{
				ft_putstr(basename(argv[0]), 2);
				ft_putstr(": ", 2);
				ft_putstr(argv[i], 2);
				ft_putstr(": ", 2);
				ft_putstr(strerror(errno), 2);
				ft_putchar('\n', 2);
			}
			i++;
		}
	}
	return (0);
}
