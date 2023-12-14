/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:49:19 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/03 18:36:55 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

int		ft_display_file(char *path);
void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		if (!ft_display_file(argv[1]))
			write(2, "Cannot read file.\n", 18);
	}
	return (0);
}

int	ft_display_file(char *path)
{
	int		file;
	int		file2;
	char	buf[100000];

	file = open(path, O_RDONLY);
	if (file < 0)
		return (0);
	file2 = read(file, buf, 100000);
	if (file2 < 1)
	{
		close(file);
		return (0);
	}
	buf[file2] = '\0';
	ft_putstr(buf);
	close(file);
	return (1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
