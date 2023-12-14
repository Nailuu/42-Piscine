/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:12:28 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/26 14:05:41 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_print_hex(char c)
{
	char	hex[16];
	int		i;

	i = 0;
	while (i < 16)
	{
		if (i < 10)
			hex[i] = i + '0';
		else
		{
			hex[i] = 55 + i;
		}
		i++;
	}
	ft_putchar(92);
	if (c >= 16)
	{
		ft_putchar(hex[c / 16]);
		ft_putchar(hex[c % 16]);
	}
	else
		ft_putchar(hex[c + 0]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			ft_print_hex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
/*int	main(void)
{
	char	test[] = "  This is a test\n";
	char	test2 = 27;
	test[0] = test2;
	ft_putstr_non_printable(test);
	return (0);
}*/
