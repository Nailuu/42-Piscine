/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:21:14 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/28 13:10:24 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlen(char *str)
{
	char			x;
	unsigned int	i;

	i = 0;
	x = str[i];
	while (x != '\0')
	{
		i++;
		x = str[i];
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size && i - 1 != ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
int	main(void)
{
	char test[] = "Julian";
	char dest[15];
	ft_strlcpy(dest, test, 4);
	char test2[] = "Julian";
	char dest2[15];
	strlcpy(dest2, test2, 6);
	printf("%s\n", dest);
	printf("%s", dest2);
	return (0);
}
