/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotz_way.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:08:56 by mashley           #+#    #+#             */
/*   Updated: 2020/12/09 17:09:00 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_way	ft_rotz_way(t_way vector, double alfa)
{
	t_way result;

	result.dx = vector.dx * cos(alfa) - vector.dy * sin(alfa);
	result.dy = vector.dx * sin(alfa) + vector.dy * cos(alfa);
	result.dz = vector.dz;
	return (result);
}
