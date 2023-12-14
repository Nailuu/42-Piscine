/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:21:31 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/04 23:32:01 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*tmp;

	size = 0;
	tmp = begin_list;
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}

/*#include <stdio.h>

void    ft_list_push_front(t_list **begin_list, void *data)
{
        t_list  *new;

        new = ft_create_elem(data);
        new->next = *begin_list;
        *begin_list = new;
}

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
        char str[] = "julian";
        char str2[] = "tom";
        char str3[] = "claire";
        t_list *elem = ft_create_elem(str);
        t_list **begin = &elem;
        ft_list_push_front(begin, str2);
        ft_list_push_front(begin, str3);
	printf("%d", ft_list_size(*begin));
        return (0);
}*/
