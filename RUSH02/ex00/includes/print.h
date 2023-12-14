/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:29:07 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/10 18:28:28 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "struct.h"

void	print_error(void);
void	print_parse_error(void);
void	print_three(char *str, int p, t_Node **head, int *begin);
void	print_zero(t_Node **head);
#endif
