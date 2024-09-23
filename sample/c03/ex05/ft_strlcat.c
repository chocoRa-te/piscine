/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hinakai <hinakai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:40:18 by hinakai           #+#    #+#             */
/*   Updated: 2024/09/21 21:34:00 by hinakai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;
	j = 0;
	while (src[j] != '\0')
		j++;
	src_len = j;
	if (size <= dest_len)
		return (src_len + size);
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char	dest[] = "Hello";
// 	char	src[] = "World";

// 	printf("%u\n", ft_strlcat(dest, src, 9));
// 	printf("%s\n", dest);
// }
