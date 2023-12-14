/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:21:12 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/23 21:31:33 by jbendine         ###   ########.fr       */
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

int	ft_is_lowercase(char c)
{
	return (c >= 97 && c <= 122);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (ft_is_lowercase(str[i]) == 1)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char test[] = "abcdefghijklmnopqrstuvwxyz";
	printf("%s", ft_strupcase(test));
	return (0);
}*/
