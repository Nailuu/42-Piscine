/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:02:25 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/04 22:23:51 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = malloc(sizeof(new));
	new->next = NULL;
	new->data = data;
	return (new);
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "julian";
	t_list *test = ft_create_elem(str);
	printf("%s\n", (char *)test->data);
	return (0);
}*/
