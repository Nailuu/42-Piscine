/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:06:48 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/04 21:04:58 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	ft_long(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i > 5);
}

int	main(void)
{
	char a[] = "abcdd";
	char b[] = "defdd";
	char c[] = "xyz";
	char *tab[] = {a, b, c, 0};
	printf("%d\n", ft_any(tab, &ft_long));
	return (0);
}*/
