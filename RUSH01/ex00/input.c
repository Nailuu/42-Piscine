/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:39:08 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/03 13:32:07 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	get_matrix_size(char *p)
{
	int	i;

	i = 0;
	while (p[i])
		i++;
	if ((i + 1) % 8 == 0)
		return ((i + 1) / 8);
	return (0);
}

int	*extract_input(char *p)
{
	int	i;
	int	j;
	int	*input;

	input = (int *)malloc(16 * sizeof(int));
	i = 0;
	j = 0;
	while (p[i])
	{
		if (i % 2 == 1 && p[i] != ' ')
		{
			free(input);
			return (NULL);
		}
		if (p[i] >= '1' && p[i] <= '4')
			input[j++] = p[i] - '0';
		i++;
	}
	if (j != 16 || !(p[i - 1] >= '1' && p[i - 1] <= '4'))
	{
		free(input);
		return (NULL);
	}
	return (input);
}

int	**init_view_arr(int *input)
{
	int	**arr;
	int	i;
	int	j;
	int	k;

	arr = (int **)malloc(sizeof(int *) * 4);
	i = 0;
	k = 0;
	while (i < 4)
		arr[i++] = (int *)malloc(sizeof(int) * 4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[i][j] = input[k];
			k++;
			j++;
		}
		i++;
	}
	free(input);
	return (arr);
}

void	free_view(int **view)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(view[i]);
		i++;
	}
	free(view);
}
