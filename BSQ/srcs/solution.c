/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:31:37 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/12 19:05:56 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "matrix.h"
#include "wmatrix.h"
#include "print.h"
#include "convert.h"
#include <stdlib.h>

int	get_min(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

void	fill_heat_map(int **wm, char **matrix, int *rc, char c)
{
	int	i;
	int	j;

	i = 0;
	while (i < rc[0])
	{
		j = 0;
		while (j < rc[1])
		{
			if (matrix[i][j] == c)
				wm[i][j] = 0;
			else if (i == 0 || j == 0)
				wm[i][j] = 1;
			else
				wm[i][j] = get_min(wm[i][j - 1],
						wm[i - 1][j - 1], wm[i - 1][j]) + 1;
			j++;
		}
		i++;
	}
}

void	solution(char *buffer, int r, int c, char *p)
{
	char	**matrix;
	int		**wmatrix;
	int		*rc;

	rc = (int *)malloc(sizeof(int) * 2);
	if (rc == NULL)
		return ;
	rc[0] = r;
	rc[1] = c;
	matrix = create_matrix(buffer, r, c);
	if (matrix == NULL)
		return ;
	wmatrix = create_wmatrix(r, c);
	if (wmatrix == NULL)
		return ;
	fill_heat_map(wmatrix, matrix, rc, p[1]);
	convert(wmatrix, matrix, rc, p[0]);
	free(rc);
	print_matrix(matrix, r, c);
	free_matrix(matrix, r);
	free_wmatrix(wmatrix, r);
}
