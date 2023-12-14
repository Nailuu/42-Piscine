/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:14:05 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/23 21:25:26 by jbendine         ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (ft_is_lowercase(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("julianzZ"));
	printf("%d", ft_str_is_lowercase(""));
	return (0);
}*/
