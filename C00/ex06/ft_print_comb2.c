/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:06:36 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/23 12:23:42 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digit(int x)
{
	char	tmp;

	tmp = (x / 10) + '0';
	ft_putchar(tmp);
	tmp = (x % 10) + '0';
	ft_putchar(tmp);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			print_digit(i);
			ft_putchar(' ');
			print_digit(j);
			if (i + j != 197)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
/*int	main()
{
	ft_print_comb2();
	return (0);
}*/
