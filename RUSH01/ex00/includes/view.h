/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 21:34:33 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/03 13:33:24 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEW_H
# define VIEW_H

int	check_left_view(int **matrix, int **view, int r);
int	check_right_view(int **matrix, int **view, int r);
int	check_up_view(int **matrix, int **view, int c);
int	check_down_view(int **matrix, int **view, int c);
#endif
