/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotway.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:39:28 by mashley           #+#    #+#             */
/*   Updated: 2020/12/09 18:39:34 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_way	ft_rotway(t_way vector, t_way axis)
{
	t_way result;

	result = ft_rotx_way(vector, axis.dx * M_PI / 180);
	result = ft_roty_way(vector, axis.dy * M_PI / 180);
	result = ft_rotz_way(vector, axis.dz * M_PI / 180);
	return (result);
}
