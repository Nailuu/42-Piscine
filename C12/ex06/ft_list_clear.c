/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:18:51 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/05 17:24:12 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;
	t_list	*elem;

	elem = begin_list;
	while (elem != NULL)
	{
		tmp = elem;
		free_fct(elem->data);
		elem = elem->next;
		free(tmp);
	}
}

/*#include <stdio.h>

t_list  *ft_create_elem(void *data)
{
        t_list  *new;

        new = malloc(sizeof(new));
        new->next = NULL;
        new->data = data;
        return (new);
}

int     main(void)
{
	char *str = (char *)malloc(sizeof(char) * 7);
	char *str2 = (char *)malloc(sizeof(char) * 4);
	char *str3 = (char *)malloc(sizeof(char) * 7);
	t_list *begin = ft_create_elem(str);
	begin->next = ft_create_elem(str2);
	begin->next->next = ft_create_elem(str3);
	ft_list_clear(begin, &free);
        return (0);
}*/
