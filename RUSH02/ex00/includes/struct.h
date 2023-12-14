/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:35:30 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/10 15:29:45 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include <stdlib.h>

typedef struct t_Node
{
	char			*key;
	char			*value;
	struct t_Node	*next;
}	t_Node;
t_Node	**s_init(void);
int		s_add_element(t_Node **head, char *key, char *value);
void	s_free(t_Node **head);
#endif
