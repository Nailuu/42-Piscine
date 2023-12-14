/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:12:52 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/27 17:45:47 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	i;

	if (min >= max)
		return (0);
	new = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min + i < max)
	{
		new[i] = min + i;
		i++;
	}
	return (new);
}

/*#include <stdio.h>

int	main(void)
{
	int	*idk;
	idk = ft_range(0, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d", idk[i]);
	}
	return (0);
}*/
