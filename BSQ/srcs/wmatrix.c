/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wmatrix.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:10:40 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/12 17:08:32 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	free_wmatrix(int **wmatrix, int r)
{
	int	i;

	i = 0;
	while (i < r)
		free(wmatrix[i++]);
	free(wmatrix);
}

int	**create_wmatrix(int r, int c)
{
	int	i;
	int	**wmatrix;

	wmatrix = (int **)malloc(sizeof(int *) * r);
	if (wmatrix == NULL)
		return (NULL);
	i = 0;
	while (i < r)
	{
		wmatrix[i] = (int *)malloc(sizeof(int) * c);
		if (wmatrix[i] == NULL)
		{
			free_wmatrix(wmatrix, r);
			return (NULL);
		}
		i++;
	}
	return (wmatrix);
}
