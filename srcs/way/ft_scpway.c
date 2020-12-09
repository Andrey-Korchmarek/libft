/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scpway.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:56:01 by mashley           #+#    #+#             */
/*   Updated: 2020/11/21 17:56:06 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

double	ft_scpway(t_way v1, t_way v2)
{
	return (v1.dx * v2.dx + v1.dy * v2.dy + v1.dz * v2.dz);
}