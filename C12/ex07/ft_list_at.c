/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:25:59 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/05 17:35:34 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*tmp;
	unsigned int	i;

	i = 0;
	tmp = begin_list;
	while (tmp != NULL)
	{
		if (i == nbr)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

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
	t_list *begin = elem;
        ft_list_push_back(&begin, str2);
	ft_list_push_back(&begin, str3);
	ft_list_push_back(&begin, str);
	ft_list_push_back(&begin, str2);
	while (elem != NULL)
	{
		printf("- %s\n", (char *)elem->data);
		elem = elem->next;
	}
	printf("------------------\n");
	printf("%s\n", (char *)(ft_list_at(begin, 4))->data);
        return (0);
}*/
