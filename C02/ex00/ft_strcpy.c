/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:10:04 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/23 11:40:22 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	x;

	i = 0;
	x = src[i];
	while (x != '\0')
	{
		x = src[i];
		dest[i] = x;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(int argc, char *argv[])
{
	char test[] = "Julian a";
	char test2[10];
	char *test3 = ft_strcpy(test2, test);

	printf("%s", test3);
	return (0);
}*/
