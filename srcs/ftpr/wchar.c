/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wchar.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreyne <sreyne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:35:48 by sreyne            #+#    #+#             */
/*   Updated: 2020/12/08 19:35:49 by sreyne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		oct_4(wint_t c)
{
	unsigned char put[4];

	put[0] = (c >> 18) + 240;
	put[1] = ((c >> 12) & 63) + 128;
	put[2] = ((c >> 6) & 63) + 128;
	put[3] = ((c & 63) + 128);
	write(1, put, 4);
}

void		oct_3(wint_t c)
{
	unsigned char put[3];

	put[0] = (c >> 12) + 224;
	put[1] = ((c >> 6) & 63) + 128;
	put[2] = ((c & 63) + 128);
	write(1, put, 3);
}

void		oct_2(wint_t c)
{
	unsigned char put[2];

	put[0] = (c >> 6) + 192;
	put[1] = ((c & 63) + 128);
	write(1, put, 2);
}

void		oct_1(wint_t c)
{
	write(1, &c, 1);
}

void		print_wchar(wint_t c, t_tab *tab)
{
	if (c <= 127)
	{
		tab->len += 1;
		oct_1(c);
	}
	if (c >= 127 && c <= 2047)
	{
		tab->len += 2;
		oct_2(c);
	}
	if (c >= 2048 && c <= 65535)
	{
		tab->len += 3;
		oct_3(c);
	}
	if (c >= 65536 && c <= 2097151)
	{
		tab->len += 4;
		oct_4(c);
	}
}
