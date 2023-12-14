/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:48:30 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/23 21:32:49 by jbendine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	x;
	int		i;

	i = 0;
	x = str[i];
	while (x != '\0')
	{
		i++;
		x = str[i];
	}
	return (i);
}

int	ft_is_uppercase(char c)
{
	return (c >= 65 && c <= 90);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (ft_is_uppercase(str[i]) == 1)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char test[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%s", ft_strlowcase(test));
	return (0);
}*/
