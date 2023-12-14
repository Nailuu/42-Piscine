/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:14:36 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/06 18:06:21 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp != NULL)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
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

int	ft_cmp(void *s1, void *s2)
{
	int	i;
	char *str = (char *)s1;
	int *x = (int *)s2;
	i = 0;
	while (str[i])
		i++;
	if (i < *x)
		return (0);
	else
		return (1);
}

void	ft_modify(void *data)
{
	char *str[2] = "42"
	*data = str;
	printf("%s\n", (char *)data);
}

int     main(void)
{
	char *strs[] = {"julian", "tom", "claire", "stephane"};
	t_list *begin = ft_list_push_strs(4, strs);
	t_list *tmp = begin;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
	int x = 5;
	int *data_ref = &x;
	ft_list_foreach_if(begin, &ft_modify, data_ref, &ft_cmp);
	tmp = begin;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
        return (0);
}*/
