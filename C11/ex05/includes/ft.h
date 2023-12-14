/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:07:15 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/04 21:06:07 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_atoi(char *str);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_divide(int a, int b);
int		ft_multiplication(int a, int b);
int		ft_modulo(int a, int b);
void	ft_putnbr(int x);
void	do_op(char *arg1, char *arg2, char *arg3);
#endif
