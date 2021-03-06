/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 22:09:36 by mashley           #+#    #+#             */
/*   Updated: 2020/08/04 22:09:44 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_free_array(int ***as)
{
	int i;

	if (!as || !(*as))
		return ;
	i = 0;
	while (*as[i])
	{
		free(*as[i]);
		*as[i] = NULL;
		i++;
	}
	free(*as);
	*as = NULL;
}
