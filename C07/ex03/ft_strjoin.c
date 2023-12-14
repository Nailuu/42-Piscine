/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:27:19 by jbendine          #+#    #+#             */
/*   Updated: 2023/12/05 10:59:33 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ml(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	result;

	result = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			result += 1;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	return (result + (i * (size - 1)));
}

void	ft_concatenate2(int *k, int *j, char *result, char *sep)
{
	(*k)++;
	result[*k - 1] = sep[*j];
	(*j)++;
}

int	ft_concatenate(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (i < size + (size - 1))
	{
		j = 0;
		if (i % 2 == 0)
		{
			while (strs[i / 2][j] != '\0')
			{
				k++;
				result[k - 1] = strs[i / 2][j];
				j++;
			}
		}
		else
			while (sep[j] != '\0')
				ft_concatenate2(&k, &j, result, sep);
		i++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		k;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	result = (char *)malloc(sizeof(char) * (ft_ml(size, strs, sep) + 1));
	k = ft_concatenate(size, strs, sep, result);
	result[k] = '\0';
	return (result);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	argc += 0;
	char *strs[] = {argv[2], argv[3], argv[4]};
	char *test = ft_strjoin(0, strs, argv[1]);
	free(test);
	return (0);
}*/
