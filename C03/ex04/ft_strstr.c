/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:41:50 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/27 13:40:35 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(int i, int j, char *str, char *to_find)
{
	while (to_find[j] != '\0')
	{
		if (str[i + j] != to_find[j])
			return (0);
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (ft_strcmp(i, j, str, to_find))
			return (&str[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "julian is the goat";
	char to_find[] = " ";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
