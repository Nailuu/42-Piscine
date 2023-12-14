/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:31:53 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/10 18:24:43 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strlen.h"
#include "struct.h"
#include "search.h"
#include "print.h"
#include "ft_putstr.h"
#include "parse.h"
#include "validate.h"

void	init_var(char *n_str, int *length, int *place, int *p)
{
	*length = ft_strlen(n_str);
	*place = *length / 3;
	*p = 0;
}

void	convert(t_Node **head, char *str, int length, int place)
{
	int		p;
	int		begin;
	char	*n_str;

	if (ft_strlen(str) == 1 && str[0] == '0')
		print_zero(head);
	if (ft_strlen(str) == 1 && str[0] == '0')
		return ;
	n_str = fill_w_zero(str, 0, 0, 0);
	if (n_str == NULL)
		return ;
	if (validate(head, n_str) == 0)
		print_parse_error();
	if (validate(head, n_str) == 0)
		return ;
	init_var(n_str, &length, &place, &p);
	begin = 0;
	while (place >= 1)
	{
		print_three(n_str, p, head, &begin);
		if (place-- != 1)
			ft_putstr(s_find_group(head, (place * 3) + 1), 1, &begin);
		p += 3;
	}
	ft_free(n_str);
}
