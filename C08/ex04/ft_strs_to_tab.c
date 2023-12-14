/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:09:11 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/29 19:43:32 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	char	x;
	int		i;

	i = 0;
	x = str[i];
	while (x != '\0')
	{
		i++;
		x = str[i];
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*a;
	int					i;

	i = 0;
	a = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (a == 0)
		return (0);
	while (i < ac)
	{
		a[i].str = (char *)malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		a[i].copy = (char *)malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		if (a[i].str == 0 || a[i].copy == 0)
			return (0);
		a[i].size = ft_strlen(av[i]);
		ft_strcpy(a[i].str, av[i]);
		ft_strcpy(a[i].copy, av[i]);
		i++;
	}
	a[i].str = 0;
	return (a);
}

/*#include <stdio.h>

int	main(void)
{
	char *av[] = {"string n1", "julian", "viktor"};
	struct s_stock_str *t = ft_strs_to_tab(3, av);
	
	for(int i = 0; i < 4; i++)
	{
		printf("size : %d\n", t[i].size);
		printf("str : %s\n", t[i].str);
		printf("copy : %s\n", t[i].copy);
	}
	return (0);
}*/
