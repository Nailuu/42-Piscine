/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:51:17 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/07 17:10:30 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

int	ft_read(char *path)
{
	char	buffer[BUFFER_SIZE];
	int		size;
	int		file;

	file = open(path, O_RDWR);
	if (file == -1)
		return (0);
	size = read(file, buffer, BUFFER_SIZE);
	while (size != 0)
	{
		ft_putstr_buffer(buffer, size);
		size = read(file, buffer, BUFFER_SIZE);
	}
	close(file);
	return (1);
}
