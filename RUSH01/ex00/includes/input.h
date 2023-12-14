/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:20:47 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/03 13:32:30 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_H
# define INPUT_H

int		get_matrix_size(char *p);
int		*extract_input(char *p);
int		**init_view_arr(int *input);
void	free_view(int **view);
#endif
