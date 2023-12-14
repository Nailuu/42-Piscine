/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:29:30 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/10 18:41:51 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "search.h"
#include "struct.h"
#include "ft_putstr.h"
#include "ft_strcmp.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
}

void	print_parse_error(void)
{
	write(2, "Dict Error\n", 11);
}

void	print_three(char *str, int p, t_Node **head, int *begin)
{
	if (str[p] != '0')
	{
		ft_putstr(s_find_ones(head, str[p]), 1, begin);
		ft_putstr(s_find_group(head, 3), 1, begin);
	}
	if (str[p + 1] != '0' && str[p + 1] > '1')
		ft_putstr(s_find_tens(head, str[p + 1]), 1, begin);
	if (str[p + 2] != '0' && (str[p + 1] > '1' || str[p + 1] == '0'))
		ft_putstr(s_find_ones(head, str[p + 2]), 1, begin);
	if (str[p + 1] != '0' && str[p + 2] != '0' && str[p + 1] == '1')
		ft_putstr(s_find_special_tens(head, str[p + 1], str[p + 2]), 1, begin);
	if (str[p + 1] == '1' && str[p + 2] == '0')
		ft_putstr(s_find_tens(head, str[p + 1]), 1, begin);
}

void	print_zero(t_Node **head)
{
	t_Node	*tmp;
	int		idk;

	idk = 0;
	tmp = *head;
	while (tmp != NULL)
	{
		if (ft_strcmp(tmp->key, "0") == 0)
		{
			ft_putstr(tmp->value, 0, &idk);
			ft_putstr("\n", 0, &idk);
			return ;
		}
		tmp = tmp->next;
	}
	print_parse_error();
}
