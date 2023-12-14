/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:19:37 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/29 21:09:54 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iispace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	else if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	nbr;

	i = 0;
	n = 0;
	nbr = 0;
	while (ft_iispace(str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	if (n % 2 == 1)
		nbr *= -1;
	return (nbr);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("--a-  -+ + - 456"));
	printf("%d\n", ft_atoi(" 	----45z6a"));
	printf("%d\n", ft_atoi("	 \n--123"));
	printf("%d\n", ft_atoi(" -	\va123"));
	printf("%d\n", ft_atoi("--786"));
	return (0);
}*/
