/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roty_way.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:06:29 by mashley           #+#    #+#             */
/*   Updated: 2020/12/09 17:06:33 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_way	ft_roty_way(t_way vector, double alfa)
{
	t_way result;

	result.dx = vector.dx * cos(alfa) + vector.dz * sin(alfa);
	result.dy = vector.dy;
	result.dz = vector.dz * cos(alfa) - vector.dx * sin(alfa);
	return (result);
}
