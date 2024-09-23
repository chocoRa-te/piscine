/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hinakai <hinakai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:47:46 by hinakai           #+#    #+#             */
/*   Updated: 2024/09/20 19:37:38 by hinakai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && n == 1)
			str[i] = str[i] - 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && n == 0)
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			n = 0;
		else
			n = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "salut, 43comment tu vas ?";

// 	printf("%s\n", ft_strcapitalize(str));
// 	return (0);
// }
