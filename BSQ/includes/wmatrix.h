/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wmatrix.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:17:54 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/12 16:18:46 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WMATRIX_H
# define WMATRIX_H

void	free_wmatrix(int **wmatrix, int r);
int		**create_wmatrix(int r, int c);
#endif
