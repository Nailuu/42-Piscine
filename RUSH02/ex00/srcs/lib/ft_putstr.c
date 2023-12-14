/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:55:32 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/10 18:21:06 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str, int space, int *begin)
{
	int	i;

	i = 0;
	if (space == 1 && *begin != 0)
		write(1, " ", 1);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	*begin = *begin + 1;
}
