/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:37:48 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/12 18:34:32 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	fill_matrix(char **matrix, char *buffer, int r, int c)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	while (buffer[k] != '\n')
		k++;
	k++;
	i = 0;
	while (i < r)
	{
		j = 0;
		while (j < c)
		{
			matrix[i][j] = buffer[k++];
			j++;
		}
		k++;
		i++;
	}
}

void	free_matrix(char **matrix, int r)
{
	int	i;

	i = 0;
	while (i < r)
		free(matrix[i++]);
	free(matrix);
}

char	**create_matrix(char *buffer, int r, int c)
{
	int		i;
	char	**matrix;

	matrix = (char **)malloc(sizeof(char *) * r);
	if (matrix == NULL)
		return (NULL);
	i = 0;
	while (i < r)
	{
		matrix[i] = (char *)malloc(sizeof(char) * c);
		if (matrix[i] == NULL)
		{
			free_matrix(matrix, r);
			return (NULL);
		}
		i++;
	}
	fill_matrix(matrix, buffer, r, c);
	return (matrix);
}
