/ ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:41:10 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/26 13:10:13 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (i <= str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	//ft_putstr(&addr);
	//ft_putstr(": ");
	//printf("%p", addr);
	size += 0;
	return (addr);
}
/*int	main(void)
{
	char test[] = "test";
	ft_print_memory(test, 4);
	return (0);
}*/
