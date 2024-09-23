/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hinakai <hinakai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:07:18 by hinakai           #+#    #+#             */
/*   Updated: 2024/09/24 01:24:36 by hinakai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct	s_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);

#endif