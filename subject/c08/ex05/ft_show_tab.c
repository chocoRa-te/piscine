/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikarunakai <hikarunakai@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:09:38 by hinakai           #+#    #+#             */
/*   Updated: 2024/09/25 11:59:19 by hikarunakai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long	i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
	{
		ft_putchar(i + '0');
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		i++;
	}
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stock_str arr[argc];
	int i = 0;

	while (i < argc - 1)
	{
		arr[i].str = argv[i + 1];
		arr[i].copy = argv[i + 1];
		arr[i].size = 0;
		while (argv[i + 1][arr[i].size])
			arr[i].size++;
		i++;

		arr[i].str = 0;
		ft_show_tab(arr);

		return (0);
	}
}