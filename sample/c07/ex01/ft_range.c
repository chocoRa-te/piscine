/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hinakai <hinakai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 05:34:03 by hinakai           #+#    #+#             */
/*   Updated: 2024/09/24 03:33:16 by hinakai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*range;
	long	i;

	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

// int	main(void)
// {
// 	int		min;
// 	int		max;
// 	int		*range;
// 	long	i;

// 	min = (-__INT_MAX__ - 1);
// 	max = __INT_MAX__;
// 	range = ft_range(min, max);
// 	i = 0;
// 	if (range)
// 		while (i < max - min)
// 		{
// 			printf("%d", range[i]);
// 			i++;
// 		}
// 	free(range);
// }
