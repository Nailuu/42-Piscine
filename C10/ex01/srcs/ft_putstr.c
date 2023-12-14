/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:28:59 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/07 17:05:14 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

void	ft_putstr(char *str, int output)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], output);
		i++;
	}
}

void	ft_putstr_buffer(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(str[i], 1);
		i++;
	}
}
