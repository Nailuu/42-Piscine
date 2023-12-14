/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:14:49 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/06 19:34:00 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*curr;
	t_list	*next;
	t_list	*prev;

	curr = *begin_list;
	prev = NULL;
	while (curr != NULL)
	{
		next = curr->next;
		if ((*cmp)(curr->data, data_ref) == 0)
		{
			if (prev == NULL)
				*begin_list = next;
			else if (curr == *begin_list)
				*begin_list = next;
			else
				prev->next = next;
			(*free_fct)(curr->data);
			free(curr);
		}
		prev = curr;
		curr = next;
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

int	ft_cmp(void *data, void *data_ref)
{
	char *str = (char *)data;
	int *x = (int *)data_ref;
	int i = 0;
	while (str[i])
		i++;
	return (i < *x);
}

void	ft_free(void *data)
{
	printf("free data - %s\n", (char *)data);
}

int     main(void)
{
	char *strs[] = {"julian12", "tom", "claire1", "stephane"};
	t_list *begin = ft_list_push_strs(4, strs);
	t_list *tmp = begin;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
	int x = 8;
	ft_list_remove_if(&begin, &x, &ft_cmp, &ft_free);
	tmp = begin;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
        return (0);
}*/
