/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotx_way.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:58:53 by mashley           #+#    #+#             */
/*   Updated: 2020/12/09 16:58:57 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_way	ft_rotx_way(t_way vector, double alfa)
{
	t_way result;

	result.dx = vector.dx;
	result.dy = vector.dy * cos(alfa) + vector.dz * sin(alfa);
	result.dz = -vector.dy * sin(alfa) + vector.dz * cos(alfa);
	return (result);
}
