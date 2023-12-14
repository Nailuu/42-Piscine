/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:54:18 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/03 15:53:29 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i + 1], charset) == 1
			&& ft_is_sep(str[i], charset) == 0)
			k++;
		i++;
	}
	return (k);
}

void	fill_word(char *to, char *from, char *charset)
{
	int	i;

	i = 0;
	while (ft_is_sep(from[i], charset) == 0)
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}

void	fill_array(char **result, char *str, char *charset)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (ft_is_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_is_sep(str[i + j], charset) == 0)
				j++;
			result[k] = (char *)malloc(sizeof(char) * (j + 1));
			fill_word(result[k], str + i, charset);
			k++;
			i += j;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	char	**a;

	i = 0;
	k = count_words(str, charset);
	a = (char **)malloc(sizeof(char *) * (k + 1));
	a[k] = 0;
	fill_array(a, str, charset);
	return (a);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	argc += 0;
	char **result = ft_split(argv[1], argv[2]);
	int i = 0;
	while (result[i] != 0)
	{
		printf("%s\n", result[i]);
		i++;
	}
}*/
