/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:46:35 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/28 15:14:01 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*int_array;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	int_array = (int *)malloc(sizeof(int) * (max - min));
	if (int_array == 0)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		int_array[i] = min + i;
		i++;
	}
	*range = int_array;
	return (max - min);
}

/*#include <stdio.h>

int	main(void)
{
	int	*range = (0);
	printf("%d\n\n", ft_ultimate_range(&range, 5, 10));
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", range[i]);
	}
	return (0);
}*/
