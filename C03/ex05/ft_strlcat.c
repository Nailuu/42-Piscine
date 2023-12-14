/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:36:32 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/27 13:49:49 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size] && dest_size < size)
		dest_size++;
	while (dest_size + i + 1 < size && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	if (dest_size + i < size)
		dest[dest_size + i] = '\0';
	while (src[i] != '\0')
		i++;
	return (dest_size + i);
}

/*#include <stdio.h>

int	main(void)
{
	char dest[15] = "Test";
	char src[] = " a plus";
	printf("%d - %s\n", ft_strlcat(dest, src, 11), dest);
	return (0);
}*/
