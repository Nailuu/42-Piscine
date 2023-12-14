/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:36:26 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/06 21:07:00 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

/*typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;*/

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*curr;
	t_list	*next;
	t_list	*prev;

	curr = *begin_list;
	prev = 0;
	while (curr != 0)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*begin_list = prev;
}

/*#include <stdio.h>
#include <stdlib.h>

t_list  *ft_create_elem(void *data)
{
        t_list  *new;

        new = malloc(sizeof(new));
        new->next = 0;
        new->data = data;
        return (new);
}

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

	begin = 0;
	i = 0;
	while (i < size)
	{
		ft_list_push_front(&begin, strs[i]);
		i++;
	}
	return (begin);
}

int     main(void)
{
	char *strs[] = {"julian", "tom", "claire", "stephane"};
	t_list *begin = ft_list_push_strs(4, strs);
	while (begin != 0)
	{
		printf("%s\n", (char *)begin->data);
		begin = begin->next;
	}
	char *strs2[] = {"julian", "tom", "claire", "stephane", "12348", "adjiza"};
	t_list *begin2 = ft_list_push_strs(6, strs2);
	printf("-----------------\n");
	ft_list_reverse(&begin2);
	while (begin2 != 0)
	{
		printf("%s\n", (char *)begin2->data);
		begin2 = begin2->next;
	}
        return (0);
}*/
