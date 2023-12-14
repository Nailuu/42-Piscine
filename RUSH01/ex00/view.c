/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:50:37 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/03 13:28:20 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_left_view(int **matrix, int **view, int r)
{
	int	i;
	int	max;
	int	v;

	max = 0;
	i = 0;
	v = 0;
	while (i < 4)
	{
		if (matrix[r][i] > max)
		{
			max = matrix[r][i];
			v++;
		}
		i++;
	}
	if (v == view[2][r])
		return (1);
	return (0);
}

int	check_right_view(int **matrix, int **view, int r)
{
	int	i;
	int	max;
	int	v;

	max = 0;
	i = 3;
	v = 0;
	while (i >= 0)
	{
		if (matrix[r][i] > max)
		{
			max = matrix[r][i];
			v++;
		}
		i--;
	}
	if (v == view[3][r])
		return (1);
	return (0);
}

int	check_up_view(int **matrix, int **view, int c)
{
	int	i;
	int	max;
	int	v;

	max = 0;
	i = 0;
	v = 0;
	while (i < 4)
	{
		if (matrix[i][c] > max)
		{
			max = matrix[i][c];
			v++;
		}
		i++;
	}
	if (v == view[0][c])
		return (1);
	return (0);
}

int	check_down_view(int **matrix, int **view, int c)
{
	int	i;
	int	max;
	int	v;

	max = 0;
	i = 3;
	v = 0;
	while (i >= 0)
	{
		if (matrix[i][c] > max)
		{
			max = matrix[i][c];
			v++;
		}
		i--;
	}
	if (v == view[1][c])
		return (1);
	return (0);
}
