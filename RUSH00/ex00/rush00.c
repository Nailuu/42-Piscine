/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:03:41 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/25 15:30:21 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_rush(int r, int c, int x, int y)
{
	if ((c == 0 || c == x - 1) && (r == 0 || r == y - 1))
		ft_putchar('o');
	else if ((c != 0 || c != x - 1) && (r == 0 || r == y - 1))
		ft_putchar('-');
	else if ((c == 0 || c == x - 1) && (r != 0 && r != y - 1))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	print_error(void)
{
	write(1, "x parameters is too wide for the terminal.\n", 43);
}

void	rush(int x, int y)
{
	int	r;
	int	c;

	if (x > 211)
	{
		print_error();
		return ;
	}
	r = 0;
	while (r < y)
	{
		c = 0;
		while (c < x)
		{
			print_rush(r, c, x, y);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
