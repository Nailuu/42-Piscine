/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:15:57 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/26 19:22:49 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	result = nb;
	i = nb - 1;
	while (i >= 1)
	{
		result *= i;
		i--;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return (0);
}*/
