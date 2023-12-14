/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:13:18 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/23 12:26:08 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int n, int *min_value, int cspace)
{
	int	i;

	if (cspace == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(min_value[i] + '0');
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	index_to_incr;
	int	next_value;
	int	min_value[10];
	int	max_value[10];

	i = 0;
	while (i < n)
	{
		min_value[i] = i;
		max_value[i] = (10 - n) + i;
		i++;
	}
	ft_print(n, min_value, 0);
	while (min_value[0] != max_value[0])
	{
		index_to_incr = n - 1;
		while (min_value[index_to_incr] == max_value[index_to_incr])
			index_to_incr--;
		next_value = ++(min_value[index_to_incr]);
		while (index_to_incr < n - 1)
			min_value[++index_to_incr] = ++next_value;
		ft_print(n, min_value, 1);
	}
}
/*int	main()
{
	ft_print_combn(4);
	return (0);
}*/
