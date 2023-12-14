/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:06:41 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/04 21:04:43 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	i = 0;
	res = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

/*#include <stdio.h>

int	ft_double(int x)
{
	return (x * 2);
}

int	main(void)
{
	int tab[] = {12, 23, 45, 98, 5};

	int *res = ft_map(tab, 5, &ft_double);
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", res[i]);
	}
	return (0);
}*/
