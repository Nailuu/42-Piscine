/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:01:13 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/06 16:13:58 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp != 0)
	{
		(*f)(tmp->data);
		tmp = tmp->next;
	}
}

/*#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

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

void	ft_double(void *data)
{
	int	*x;

	x = (int *)data;
	*x *= 2;
}

int	main(void)
{
	int str = 5;
	int str2 = 10;
	int str3 = 15;
	int	*x;
	t_list *elem = ft_create_elem(&str);
	t_list **begin = &elem;
	ft_list_push_front(begin, &str2);
	ft_list_push_front(begin, &str3);
	t_list *node = *begin;
	ft_list_foreach(*begin, &ft_double);
	while (node != NULL)
	{
		x = (int *)node->data;
		printf("%d\n", *x);
		node = node->next;
	}
	return (0);
}*/
