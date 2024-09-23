/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hinakai <hinakai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:46:28 by hinakai           #+#    #+#             */
/*   Updated: 2024/09/22 17:27:49 by hinakai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = __INT_MAX__;
// 	printf("%d", ft_iterative_factorial(nb));
// }
