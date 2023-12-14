/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:14:33 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/11 17:15:32 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_H
# define READ_H

char	*read_file(char *path);
char	*read_stdin(char *path);
void	free_file_buffer(char *buffer);
#endif
