/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreyne <sreyne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:33:03 by sreyne            #+#    #+#             */
/*   Updated: 2020/12/08 20:04:01 by sreyne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_lenbr(size_t n)
{
	int		len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa_unsigned(size_t n)
{
	char	*str;
	size_t	len;

	len = ft_lenbr(n);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[len-- - 1] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
