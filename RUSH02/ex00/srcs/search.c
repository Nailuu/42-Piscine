/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:38:03 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/10 15:32:19 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strlen.h"
#include "struct.h"

int	key_is_valid(char *key)
{
	int	i;

	i = 0;
	while (key[i])
	{
		if (i == 0 && key[i] != '1')
			return (0);
		if (i > 0 && key[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

char	*s_find_ones(t_Node **head, char x)
{
	t_Node	*tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		if (ft_strlen(tmp->key) == 1 && tmp->key[0] == x)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

char	*s_find_tens(t_Node **head, char x)
{
	t_Node	*tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		if (ft_strlen(tmp->key) == 2 && tmp->key[0] == x && tmp->key[1] == '0')
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

char	*s_find_special_tens(t_Node **head, char x, char y)
{
	t_Node	*tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		if (ft_strlen(tmp->key) == 2 && tmp->key[0] == x && tmp->key[1] == y)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

char	*s_find_group(t_Node **head, int length)
{
	t_Node	*tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		if (ft_strlen(tmp->key) == length && key_is_valid(tmp->key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
