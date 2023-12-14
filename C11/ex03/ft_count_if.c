/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:06:56 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/04 20:06:57 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			res++;
		i++;
	}
	return (res);
}

/*#include <stdio.h>

int     ft_long(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
        return (i > 5);
}

int     main(void)
{
        char a[] = "abcddxx";
        char b[] = "defddd";
        char c[] = "xyz";
        char *tab[] = {a, b, c};
        printf("%d\n", ft_count_if(tab, 3, &ft_long));
        return (0);
}*/
