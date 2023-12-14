/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:22:09 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/03 15:02:34 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/solve.h"
#include "includes/print.h"

int	main(int argc, char *argv[])
{
	if (argc == 2)
		program(argv[1]);
	else
		print_error();
	return (0);
}
