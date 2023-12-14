/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgengler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:07:11 by lgengler          #+#    #+#             */
/*   Updated: 2023/12/03 13:35:07 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/view.h"

int	is_valid_row(int **m, int **v, int r)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = i + 1;
		while (j < 4)
		{
			if (m[r][i] == m[r][j])
				return (0);
			j++;
		}
		i++;
	}
	if (!check_left_view(m, v, r))
		return (0);
	if (!check_right_view(m, v, r))
		return (0);
	return (1);
}

int	is_valid_col(int **m, int **v, int c)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = i + 1;
		while (j < 4)
		{
			if (m[i][c] == m[j][c])
				return (0);
			j++;
		}
		i++;
	}
	if (!check_up_view(m, v, c))
		return (0);
	if (!check_down_view(m, v, c))
		return (0);
	return (1);
}

int	is_all_col_valid(int **m, int **v)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!is_valid_col(m, v, i))
			return (0);
		i++;
	}
	return (1);
}
