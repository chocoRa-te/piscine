/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikarunakai <hikarunakai@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:07:48 by hinakai           #+#    #+#             */
/*   Updated: 2024/09/25 12:10:01 by hikarunakai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (str == NULL)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stocks;
	int					i;

	stocks = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!stocks)
		return (NULL);
	stocks->size = 0;
	stocks->str = 0;
	stocks->copy = 0;
	i = 0;
	while (i != ac)
	{
		stocks[i].size = (int)malloc(sizeof(int));
		if (!stocks[i].size)
			return (NULL);
		stocks[i].size = ft_strlen(av[i]);
		stocks[i].str = malloc(sizeof(char) * ft_strlen(av[i]));
		if (!stocks[i].str)
			return (NULL);
		stocks[i].str = av[i];
		stocks[i].copy = ft_strdup(av[i]);
		i++;
	}
	stocks[i].str = 0;
	return (stocks);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	struct s_stock_str	*tab;
	int					i;

	if (argc < 2)
		return (0);
	tab = ft_strs_to_tab(argc - 1, argv + 1);
	if (!tab)
		return (1);
	i = 0;
	while (tab[i].str)
	{
		printf("String: %s, Size: %d, Copy: %s\n", tab[i].str, tab[i].size, tab[i].copy);
		i++;
	}
	free(tab);
	return (0);
}