/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:28:48 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/10 17:54:13 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

int		parse_dict(int fd, char *path, t_Node **head);
char	*fill_w_zero(char *str, int length, int i, int j);
void	ft_free(char *n_str);
#endif
