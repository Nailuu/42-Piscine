/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:32:57 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/10 11:37:59 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strdup.h"
#include "struct.h"

t_Node	**s_init(void)
{
	t_Node	**head;

	head = (t_Node **)malloc(sizeof(t_Node *));
	if (head == NULL)
		return (NULL);
	*head = NULL;
	return (head);
}

int	s_add_element(t_Node **head, char *key, char *value)
{
	t_Node	*new;

	new = (t_Node *)malloc(sizeof(new));
	if (new == NULL)
		return (-1);
	new->key = ft_strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (-1);
	}
	new->value = ft_strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (-1);
	}
	new->next = *head;
	*head = new;
	return (0);
}

void	s_free(t_Node **head)
{
	t_Node	*tmp;
	t_Node	*tmp2;

	tmp = *head;
	while (tmp != NULL)
	{
		tmp2 = tmp;
		free(tmp->key);
		free(tmp->value);
		tmp = tmp->next;
		free(tmp2);
	}
	free(head);
}
