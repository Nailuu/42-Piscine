/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:15:33 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/10 18:04:35 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "struct.h"
#include "search.h"

int	ft_check_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
		{
			return (0);
		}
		i++;
	}
	if (i == 0)
		return (0);
	return (1);
}

int	validate_three(char *str, int p, t_Node **head)
{
	if (str[p] != '0')
		if (s_find_ones(head, str[p]) == NULL
			|| s_find_group(head, 3) == NULL)
			return (0);
	if (str[p + 1] != '0' && str[p + 1] > '1')
		if (s_find_tens(head, str[p + 1]) == NULL)
			return (0);
	if (str[p + 2] != '0' && (str[p + 1] > '1' || str[p + 1] == '0'))
		if (s_find_ones(head, str[p + 2]) == NULL)
			return (0);
	if (str[p + 1] != '0' && str[p + 2] != '0' && str[p + 1] == '1')
		if (s_find_special_tens(head, str[p + 1], str[p + 2]) == NULL)
			return (0);
	if (str[p + 1] == '1' && str[p + 2] == '0')
		if (s_find_tens(head, str[p + 1]) == NULL)
			return (0);
	return (1);
}

int	validate(t_Node **head, char *str)
{
	int	length;
	int	place;
	int	p;

	p = 0;
	length = 0;
	while (str[length])
		length++;
	place = length / 3;
	while (place >= 1)
	{
		if (validate_three(str, p, head) == 0)
			return (0);
		if (place != 1)
		{
			if (s_find_group(head, (place - 1) * 3 + 1) == NULL)
				return (0);
		}
		place--;
		p += 3;
	}
	return (1);
}
