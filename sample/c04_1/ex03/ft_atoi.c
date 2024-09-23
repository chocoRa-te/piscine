/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hinakai <hinakai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:46:34 by hinakai           #+#    #+#             */
/*   Updated: 2024/09/22 02:55:06 by hinakai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	negative;

	n = 0;
	i = 0;
	negative = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = negative * (-1);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = 10 * n + (str[i] - 48);
		i++;
	}
	return (n * negative);
}
// int	main(void)
// {
// 	char	str[] = "---+--+1234ab567";

// 	printf("%d", ft_atoi(str));
// }
