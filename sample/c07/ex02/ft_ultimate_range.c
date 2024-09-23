/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hinakai <hinakai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:55:10 by hinakai           #+#    #+#             */
/*   Updated: 2024/09/24 03:33:06 by hinakai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	long	i;

	if (min >= max)
		return (0);
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (!range)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// int	main(void)
// {
// 	int		min;
// 	int		max;
// 	int		*range;
// 	int		size;
// 	long	i;

// 	min = 3;
// 	max = 20;
// 	size = ft_ultimate_range(&range, min, max);
// 	if (range)
// 	{
// 		i = 0;
// 		while (i < size)
// 		{
// 			printf("%d ", range[i]);
// 			i++;
// 		}
// 		free(range);
// 	}
// }
