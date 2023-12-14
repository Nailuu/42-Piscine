/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:06:15 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/04 20:06:34 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
        if (nb == -2147483648)
        {
                ft_putchar('-');
                ft_putchar('2');
                nb = 147483648;
        }
        if (nb < 0)
        {
                ft_putchar('-');
                nb *= -1;
        }
        if (nb >= 10)
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
        else
        {
                ft_putchar(nb + '0');
        }
}

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 8, 213, 32, 100};

	ft_foreach(tab, 10, &ft_putnbr);
	return (0);
}*/
