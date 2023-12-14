/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:07:01 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/07 14:21:32 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	asc = 0;
	desc = 0;
	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			asc++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			desc++;
		i++;
	}
	if (asc == i || desc == i)
		return (1);
	return (0);
}

/*#include <stdio.h>

int	ft_is_bigger(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int tab[] = {800, 700, 600, 500, 400, 300, 200};
	for (int i = 0; i < 7; i++)
		printf("%d - ", tab[i]);
	printf("Is sorted?: %d\n", ft_is_sort(tab, 7, &ft_is_bigger));
	return (0);
}*/
