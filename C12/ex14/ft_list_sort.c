/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:18:13 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/06 22:16:25 by jbendine         ###   ########.fr       */
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

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*curr;
	t_list	*next;
	t_list	*prev;
	int		size;
	int		i;
	int		j;

	size = ft_list_size(*begin_list);
	i = 0;
	while (i++ < size)
	{
		j = 0;
		curr = *begin_list;
		prev = 0;
		while (j++ < (size - i) - 1)
		{
			next = curr->next;
			if ((*cmp)(curr->data, next->data) < 0)
			{
				curr->next = prev;
				prev = curr;
				curr = next;
			}
		}
		*begin_list = prev;
	}
}

#include <stdio.h>
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

int	ft_cmp(void *s1, void *s2)
{
	char *str1 = (char *)s1;
	char *str2 = (char *)s2;

	return (str1[0] - str2[0]);
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
	char *strs2[] = {"95", "15", "3", "133"};
	t_list *begin2 = ft_list_push_strs(4, strs2);
	printf("-----------------\n");
	ft_list_sort(&begin2, &ft_cmp);
	while (begin2 != 0)
	{
		printf("%s\n", (char *)begin2->data);
		begin2 = begin2->next;
	}
	return (0);
}
