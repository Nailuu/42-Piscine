/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 01:07:20 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/30 21:29:53 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

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

void	ft_base(long nbr, char *base)
{
	int	length;

	length = 0;
	while (base[length] != '\0')
		length++;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= length)
	{
		ft_base(nbr / length, base);
		ft_base(nbr % length, base);
	}
	if (nbr < length)
	{
		write(1, &base[nbr], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_is_valid_base(base))
		ft_base(nbr, base);
}

int	main(void)
{
	char base[] = "0123456789ABCDEF";
	ft_putnbr_base(257, base);
}
