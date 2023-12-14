/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:52:37 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/27 11:18:05 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index > 1)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	else
		return (index);
}

/*int	main(void)
{
	printf("%d", ft_fibonacci(0));
	return (0);
}*/
