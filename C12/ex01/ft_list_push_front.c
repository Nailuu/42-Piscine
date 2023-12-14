/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:25:19 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/04 23:19:17 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
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

int	main(void)
{
	char str[] = "julian";
	char str2[] = "tom";
	char str3[] = "claire";
	t_list *elem = ft_create_elem(str);
	t_list **begin = &elem;
	ft_list_push_front(begin, str2);
	ft_list_push_front(begin, str3);
	t_list *node = *begin;
	while (node != NULL)
	{
		printf("%s\n", (char *)node->data);
		node = node->next;
	}
	return (0);
}*/
