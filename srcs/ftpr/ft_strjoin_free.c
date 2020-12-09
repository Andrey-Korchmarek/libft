/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreyne <sreyne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:33:18 by sreyne            #+#    #+#             */
/*   Updated: 2020/12/08 19:33:19 by sreyne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strjoin_free(char *s1, char *s2, int i)
{
	char	*new;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(new = ft_strnew(len)))
		return (NULL);
	ft_strcat(new, s1);
	ft_strcat(new, s2);
	if (i == 1 || i == 3)
		free(s1);
	if (i == 2 || i == 3)
		free(s2);
	return (new);
}
