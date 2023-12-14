/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egruslin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:24:28 by egruslin          #+#    #+#             */
/*   Updated: 2023/12/12 19:06:05 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*get_biggest(int **wmatrix, int r, int c)
{
	int	i;
	int	j;
	int	*co;

	co = malloc(sizeof (int) * 3);
	if (co == NULL)
		return (NULL);
	i = 0;
	co[2] = 0;
	while (i < r)
	{
		j = 0;
		while (j < c)
		{
			if (wmatrix[i][j] > co[2])
			{
				co[2] = wmatrix[i][j];
				co[0] = i;
				co[1] = j;
			}
			j++;
		}
		i++;
	}
	return (co);
}

void	convert(int **wmatrix, char **matrix, int *rc, char c)
{
	int	index;
	int	fit_col;
	int	j;
	int	size;
	int	*biggest;

	biggest = get_biggest(wmatrix, rc[0], rc[1]);
	if (biggest == NULL)
		return ;
	j = biggest[1];
	size = biggest[2];
	index = 0;
	while (index < size)
	{
		fit_col = j;
		while (fit_col > j - size)
		{
			matrix[biggest[0] - index][fit_col] = c;
			fit_col--;
		}
		index++;
	}
	free(biggest);
}
