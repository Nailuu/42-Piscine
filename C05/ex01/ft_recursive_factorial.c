/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:31:05 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/27 19:24:27 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(-5));
	return (0);
}*/
