/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:03:41 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/25 16:17:50 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush_print(int r, int c, int x, int y)
{
	if ((c == 0 || c == x - 1) && r == 0)
		ft_putchar('A');
	else if ((c == 0 || c == x -1) && r == y - 1)
		ft_putchar('C');
	else if ((c != 0 || c != x - 1) && (r == 0 || r == y - 1))
		ft_putchar('B');
	else if ((c == 0 || c == x - 1) && (r != 0 && r != y - 1))
		ft_putchar('B');
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
			rush_print(r, c, x, y);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
