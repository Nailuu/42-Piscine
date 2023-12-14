/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:03:32 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/23 21:26:17 by jbendine         ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (ft_is_uppercase(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("JULIAN"));
	printf("%d\n", ft_str_is_uppercase("JLIANz"));
	printf("%d", ft_str_is_uppercase(""));
	return (0);
}*/
