/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:20:54 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/30 19:48:18 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_base(char *b)
{
	int	i;
	int	j;

	i = 0;
	while (b[i])
	{
		if (b[i] == 32 || (b[i] >= 9 && b[i] <= 13))
			return (0);
		if (b[i] == '+' || b[i] == '-')
			return (0);
		j = i + 1;
		while (b[j])
		{
			if (b[i] == b[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_base_index(char c, char *base)
{
	int	i;

	i = 0;
	if (base[i] == c)
		return (0);
	while (base[i] != c && base[i])
		i++;
	if (i != 0)
		return (i);
	else
		return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	result;
	int	l;

	l = 0;
	while (base[l])
		l++;
	n = 0;
	result = 0;
	if (l < 2 || !str[0] || !ft_base(base))
		return (0);
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			n++;
	}
	while (ft_base_index(str[i], base) >= 0 && str[i])
		result = result * l + ft_base_index(str[i++], base);
	if (n % 2 != 0)
		result *= -1;
	return (result);
}

/*int	main(void)
{
	char str[] = "	 --+--+AF35";
	char base[] = "0123456789ABCDEF";
	printf("%d", ft_atoi_base(str, base));
	return (0);
}*/
