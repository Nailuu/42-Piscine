/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:23:08 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/12 19:14:02 by egruslin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "ft_atoi.h"
#include "ft_is_printable.h"

char	*check_first_line(char *buffer, char *chars, int i, int j)
{
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	if (i > 3)
	{
		while (buffer[j] >= '0' && buffer[j] <= '9' && j < i - 3)
			j++;
		while (ft_is_printable(buffer[j]) && j != i)
			j++;
		if (j != i)
			return (NULL);
		j -= 3;
		if (buffer[j] == buffer[j + 1] || buffer[j] == buffer[j + 2]
			|| buffer[j + 1] == buffer [j + 2])
			return (0);
		chars[0] = buffer[j];
		chars[1] = buffer[j + 1];
		chars[2] = buffer[j + 2];
		chars[3] = '\0';
		return (chars);
	}
	j = 0;
	return (NULL);
}

int	check_lines(char *buf, char *chars, int *pcol, int i)
{
	int	line;
	int	largest;

	line = 1;
	largest = 0;
	while (buf[i - 1] != '\n')
		i++;
	while (buf[i] != '\0' && (buf[i] == chars[0]
			|| buf[i] == chars[1] || buf[i] == '\n'))
	{
		if (buf[i] == '\n')
		{
			if (largest == 0)
				largest = line;
			else if (line != largest)
				return (0);
			line = 0;
		}
		i++;
		line++;
	}
	if (buf[i] != '\0')
		return (0);
	*pcol = largest - 1;
	return (1);
}

int	check_line_count(char *buffer, int i, int j)
{
	int		atoi;
	int		line;
	char	*number;

	line = 0;
	while (buffer[i] != '\n')
		i++;
	number = (char *)malloc(sizeof(char) * (i - 2));
	if (number == NULL)
		return (0);
	while (j++ < i - 3)
		number[j - 1] = buffer[j - 1];
	number[j] = '\0';
	atoi = ft_atoi(number);
	i++;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			line++;
		i++;
	}
	free(number);
	if (atoi != line)
		return (0);
	return (line);
}

int	check_map(char *buffer, int *prow, int *pcol, char *c)
{
	char	*chars;

	chars = malloc(sizeof (char) * 4);
	if (chars == NULL)
		return (0);
	chars = check_first_line(buffer, chars, 0, 0);
	c[0] = chars[2];
	c[1] = chars[1];
	if (chars != NULL && check_lines(buffer, chars, pcol, 0))
	{
		*prow = check_line_count(buffer, 0, 0);
		if (*prow > 0)
		{
			free(chars);
			return (1);
		}
	}
	free(chars);
	return (0);
}
