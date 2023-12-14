/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:57:58 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/05 15:25:12 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last;
	t_list	*new;

	last = *begin_list;
	while (last->next != NULL)
		last = last->next;
	new = ft_create_elem(data);
	if (last != NULL)
		last->next = new;
	else
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

int     main(void)
{
        char str[] = "julian";
        char str2[] = "tom";
        char str3[] = "claire";
        t_list *elem = ft_create_elem(str);
        t_list **begin = &elem;
        ft_list_push_back(begin, str2);
	ft_list_push_back(begin, str3);
	while (*begin != NULL)
	{
		printf("%s\n", (char *)(*begin)->data);
		*begin = (*begin)->next;
	}
        return (0);
}*/
