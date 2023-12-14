/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:50:40 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/10 15:30:03 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEARCH_H
# define SEARCH_H

# include "struct.h"

int		key_is_valid(char *key);
char	*s_find_ones(t_Node **head, char x);
char	*s_find_tens(t_Node **head, char x);
char	*s_find_special_tens(t_Node **head, char x, char y);
char	*s_find_group(t_Node **head, int length);
#endif
