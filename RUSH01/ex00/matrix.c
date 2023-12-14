/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:02:16 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/03 13:36:05 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	fill_matrix(int view, int **m, int x)
{
	int	i;

	i = 0;
	while (view == 0 && i < 4)
	{
		m[i][x] = i + 1;
		i++;
	}
	while (view == 2 && i < 4)
	{
		m[x][i] = i + 1;
		i++;
	}
	i = 3;
	while (view == 1 && i > 0)
	{
		m[i][x] = 4 - i;
		i--;
	}
	while (view == 3 && i > 0)
	{
		m[x][i] = 4 - i;
		i--;
	}
}

void	fill_clue_matrix(int **matrix, int **view)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (view[i][j] == 4)
				fill_matrix(i, matrix, j);
			j++;
		}
		i++;
	}
}

int	**init_matrix(int **view)
{
	int	**m;
	int	i;

	i = 0;
	m = (int **)malloc(sizeof(int *) * 4);
	if (m == NULL)
		return (NULL);
	while (i < 4)
	{
		m[i] = (int *)malloc(sizeof(int) * 4);
		if (m == NULL)
			return (NULL);
		i++;
	}
	fill_clue_matrix(m, view);
	return (m);
}

void	free_matrix(int **matrix)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
