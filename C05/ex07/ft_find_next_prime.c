/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:40:27 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/29 15:13:52 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(unsigned int nb)
{
	unsigned int	i;

	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	unsigned int	i;

	i = nb;
	if (nb < 2)
		return (2);
	while (ft_is_prime(i) != 1)
		i++;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(21474836));
	return (0);
}
