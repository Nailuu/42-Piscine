/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:19:28 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/07 17:13:18 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <errno.h>
# include <libgen.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# define BUFFER_SIZE 30000

void	ft_putchar(char c, int output);
void	ft_putstr(char *str, int output);
void	ft_putstr_buffer(char *str, int size);
void	ft_args(char *argv[]);
int		ft_read(char *path);
#endif
