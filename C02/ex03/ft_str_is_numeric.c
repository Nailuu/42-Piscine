/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:28:18 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/23 21:24:43 by jbendine         ###   ########.fr       */
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

int	ft_is_numeric(char c)
{
	return (c >= 48 && c <= 57);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (ft_is_numeric(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	printf("%d", ft_str_is_numeric(""));
	return (0);
}*/
