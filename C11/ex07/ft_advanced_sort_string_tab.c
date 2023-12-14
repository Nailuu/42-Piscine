/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:08:18 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/04 21:13:44 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		length;
	char	*tmp;

	length = 0;
	while (tab[length])
		length++;
	i = 0;
	while (i < length)
	{
		j = 0;
		while (j < (length - i) - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>

int     ft_strlen(char *str)
{
      	int             i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}

int     ft_strcmp(char *s1, char *s2)
{
        int     i;

        i = 0;
        while (i < ft_strlen(s1) || i < ft_strlen(s2))
        {
                if (s1[i] > s2[i])
                        return (s1[i] - s2[i]);
                if (s1[i] < s2[i])
                        return (s1[i] - s2[i]);
                i++;
	}
	return (0);
}

int     main(void)
{
        char a[] = "abc4";
        char b[] = "abc3";
        char c[] = "abc92";
        char d[] = "abc1";
        char *tab[] = {a, b, c, d, 0};
        ft_advanced_sort_string_tab(tab, &ft_strcmp);
        for(int i = 0; i < 4; i++)
        {
                printf("%s\n", tab[i]);
        }
        return (0);
}*/
