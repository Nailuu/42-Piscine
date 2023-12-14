/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:07:23 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/06 20:31:53 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include <unistd.h>

int	get_op(char *arg2)
{
	char	op;

	op = arg2[0];
	if (op == '+')
		return (0);
	if (op == '-')
		return (1);
	if (op == '/')
		return (2);
	if (op == '*')
		return (3);
	if (op == '%')
		return (4);
	return (-1);
}

int	ft_check_dm(char *v1, int op, char *v2)
{
	if (op == 2 && (ft_atoi(v1) == 0 || ft_atoi(v2) == 0))
	{
		write(1, "Stop : division by zero", 23);
		return (0);
	}
	if (op == 4 && (ft_atoi(v1) == 0 || ft_atoi(v2) == 0))
	{
		write(1, "Stop : modulo by zero", 21);
		return (0);
	}
	return (1);
}

void	do_op(char *arg1, char *arg2, char *arg3)
{
	int	(*f_tab[5])(int, int);
	int	op;

	op = get_op(arg2);
	f_tab[0] = ft_add;
	f_tab[1] = ft_sub;
	f_tab[2] = ft_divide;
	f_tab[3] = ft_multiplication;
	f_tab[4] = ft_modulo;
	if (op >= 0)
	{
		if (ft_check_dm(arg1, op, arg3) == 1)
			ft_putnbr(f_tab[op](ft_atoi(arg1), ft_atoi(arg3)));
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
}
