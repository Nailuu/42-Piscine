/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbendine <jbendine@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:53:05 by jbendine          #+#    #+#             */
/*   Updated: 2023/11/23 22:05:35 by jbendine         ###   ########.fr       */
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

int	ft_a(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_n(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if ((ft_n(str[i - 1]) == 0 && ft_a(str[i - 1]) == 0) || i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char test[] = "saLUt, coMMENTnt tu vAS ? 42mOTs quaranTE-DEux; cInquante+ET+uN";
	printf("%s", ft_strcapitalize(test));
	return (0);
}*/
