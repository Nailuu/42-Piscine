/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:26:43 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/05 15:59:25 by jbendine         ###   ########.fr       */
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin;
	int		i;

	begin = NULL;
	i = 0;
	while (i < size)
	{
		ft_list_push_front(&begin, strs[i]);
		i++;
	}
	return (begin);
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
	char *strs[] = {"julian", "tom", "claire", "stephane"};
	t_list *begin = ft_list_push_strs(4, strs);
	while (begin != NULL)
	{
		printf("%s\n", (char *)begin->data);
		begin = begin->next;
	}
        return (0);
}*/
