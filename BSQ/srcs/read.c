/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:32:54 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/11 18:16:37 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int	get_buffer_size(char *path)
{
	int		fd;
	int		size;
	char	buffer;

	size = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (-1);
	while (read(fd, &buffer, 1) > 0)
		size++;
	close(fd);
	return (size);
}

char	*read_file(char *path)
{
	int		size;
	int		fd;
	char	*buffer;

	size = get_buffer_size(path);
	if (size < 0)
		return (NULL);
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (size + 1));
	if (buffer == NULL)
		return (NULL);
	read(fd, buffer, size);
	buffer[size] = '\0';
	close(fd);
	return (buffer);
}

void	reset_file(char *path)
{
	int	fd;

	fd = open(path, O_TRUNC);
	if (fd < 0)
		return ;
	close(fd);
}

char	*read_stdin(char *path)
{
	char	buffer;
	int		fd;

	reset_file(path);
	fd = open(path, O_CREAT | O_WRONLY, 0666);
	if (fd < 0)
		return (NULL);
	while (read(0, &buffer, 1) > 0)
		write(fd, &buffer, 1);
	close(fd);
	return (read_file(path));
}

void	free_file_buffer(char *buffer)
{
	free(buffer);
}
