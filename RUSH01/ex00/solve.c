/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:58:43 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/03 13:35:34 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/input.h"
#include "includes/matrix.h"
#include "includes/print.h"
#include "includes/validator.h"

int	solve(int **matrix, int **view, int r, int c)
{	
	int	i;

	if (r == 4)
		return (is_all_col_valid(matrix, view));
	if (c == 4)
	{
		if (!is_valid_row(matrix, view, r))
			return (0);
		return (solve(matrix, view, r + 1, 0));
	}
	i = 1;
	while (i <= 4)
	{
		if (view[2][r] == 4 || view[3][r] == 4)
			return (solve(matrix, view, r + 1, c));
		if (view[0][c] == 4 || view[1][c] == 4)
			return (solve(matrix, view, r, c + 1));
		matrix[r][c] = i;
		if (solve(matrix, view, r, c + 1))
			return (1);
		i++;
	}
	return (0);
}

void	program(char *arg)
{
	int	*input;
	int	**matrix;
	int	**view;

	input = extract_input(arg);
	if (input != 0)
	{
		view = init_view_arr(input);
		matrix = init_matrix(view);
		if (solve(matrix, view, 0, 0))
			print_matrix(matrix);
		else
			print_error();
		free_view(view);
		free_matrix(matrix);
	}
	else
		print_error();
}
