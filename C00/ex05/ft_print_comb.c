/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:06:36 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/23 10:49:27 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int x, int y, int z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	if (x != 7 + '0')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{	
			k = j + 1;
			while (k <= 9)
			{
				if (i != j && i != k && k != j)
				{
					ft_print(i + '0', j + '0', k + '0');
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
/*int	main(int argc, char *argv[])
{
	ft_print_comb();
	return (0);
}*/
