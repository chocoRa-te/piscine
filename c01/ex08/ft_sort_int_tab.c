/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hinakai <hinakai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:03:55 by hinakai           #+#    #+#             */
/*   Updated: 2024/09/10 18:23:18 by hinakai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	sort;
	int	swap;

	if (size <= 1)
		return ;
	sort = 0;
	while (!sort)
	{
		sort = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				sort = 0;
			}
			i++;
		}
	}
}
// int	main(void)
// {
// 	int array[] = {40, 10, 30, 20};
// 	int size = 4;
// 	int i;

// 	ft_sort_int_tab(array, size);
// 	i = 0;

// 	while (i < size)
// 	{
// 		printf("%d", array[i]);
// 		if (i < size - 1)
// 			printf(", ");

// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }