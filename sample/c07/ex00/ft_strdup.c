/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hinakai <hinakai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:39:02 by hinakai           #+#    #+#             */
/*   Updated: 2024/09/24 03:33:23 by hinakai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char str[])
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;
	int		i;

	i = 0;
	size = ft_strlen(src);
	dest = malloc(size + 1);
	if (!dest)
		return (NULL);
	while (size > i)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*src;
// 	char	*strdup;

// 	src = "ghajaigaregaag";
// 	strdup = ft_strdup(src);
// 	printf("%s", strdup);
// 	free(strdup);
// }
