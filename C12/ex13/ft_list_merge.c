/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:35:22 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/06 20:17:37 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tmp;

	tmp = *begin_list1;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = begin_list2;
}

/*#include <stdio.h>

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
	char *strs2[] = {"abc", "dzkaod", "123456", "zzzzz"};
	t_list *begin2 = ft_list_push_strs(4, strs2);
	ft_list_merge(&begin, begin2);
	while (begin != NULL)
	{
		printf("%s\n", (char *)begin->data);
		begin = begin->next;
	}
        return (0);
}*/
