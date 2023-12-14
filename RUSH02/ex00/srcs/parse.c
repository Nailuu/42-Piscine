/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:21:33 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/10 17:53:28 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "struct.h"
#include "print.h"
#include "ft_strlen.h"
#include "ft_strstr.h"

int	add_line(char *str, t_Node **head)
{
	char	key[512];
	char	value[512];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] >= '0' && str[i] <= '9')
		key[j++] = str[i++];
	key[j] = '\0';
	j = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] != ':')
		print_parse_error();
	if (str[i++] != ':')
		return (-1);
	while (str[i] == ' ')
		i++;
	while (str[i])
		value[j++] = str[i++];
	value[j] = '\0';
	if (s_add_element(head, key, value) < 0)
		return (-1);
	return (0);
}

int	parse_dict(int fd, char *path, t_Node **head)
{
	int		bytes_read;
	char	*line;
	char	*ptr;
	char	buffer[1024];

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		ptr = buffer;
		line = ft_strstr(ptr, "\n");
		while (line != NULL)
		{
			*line = '\0';
			if (ft_strlen(ptr) > 0 && add_line(ptr, head) < 0)
				return (-1);
			ptr = line + 1;
			line = ft_strstr(ptr, "\n");
		}
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	return (0);
}

char	*fill_w_zero(char *str, int length, int i, int j)
{
	int		zero_count;
	char	*n_str;

	while (str[length])
		length++;
	zero_count = 3 - (length % 3);
	if (zero_count == 3)
		zero_count = 0;
	n_str = (char *)malloc(sizeof(char) * (length + zero_count + 1));
	if (n_str == NULL)
		return (NULL);
	n_str[length + zero_count] = '\0';
	while (zero_count > 0)
	{
		n_str[i++] = '0';
		zero_count--;
	}
	while (str[j])
		n_str[i++] = str[j++];
	return (n_str);
}

void	ft_free(char *n_str)
{
	free(n_str);
	write(1, "\n", 1);
}
