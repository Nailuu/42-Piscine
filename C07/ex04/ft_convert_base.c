/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:59:39 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/03 16:43:42 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	ft_base(char *b);
int	ft_base_index(char c, char *base);
int	ft_atoi_base(char *str, char *base);
int	ft_recursive_power(int nb, int power);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_valid_base(char *b)
{
	int	i;
	int	j;

	if (ft_strlen(b) < 2)
		return (0);
	i = 0;
	while (i < ft_strlen(b))
	{
		if (b[i] == '+' || b[i] == '-')
			return (0);
		j = i + 1;
		while (j < ft_strlen(b))
		{
			if (b[i] == b[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_base2(long nbr, char *base, char *result, int *i)
{
	int	length;

	length = 0;
	while (base[length] != '\0')
		length++;
	if (nbr < 0)
	{
		result[*i] = '-';
		nbr *= -1;
		*i += 1;
	}
	if (nbr >= length)
	{
		ft_base2(nbr / length, base, result, i);
		ft_base2(nbr % length, base, result, i);
	}
	if (nbr < length)
	{
		result[*i] = base[nbr];
		*i += 1;
	}
}

char	*init_string(long nbr, long base_size)
{
	char	*result;
	int		i;

	i = 1;
	while (ft_recursive_power(base_size, i) + 1 < nbr)
		i++;
	if (nbr < 0)
		i++;
	result = (char *)malloc(sizeof(char) * i);
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		base_size;
	int		i;

	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (0);
	base_size = 0;
	while (base_to[base_size])
		base_size++;
	result = init_string(ft_atoi_base(nbr, base_from), base_size);
	i = 0;
	ft_base2(ft_atoi_base(nbr, base_from), base_to, result, &i);
	return (result);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
	}
	return (0);
}*/
