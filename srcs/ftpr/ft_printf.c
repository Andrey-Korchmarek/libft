/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreyne <sreyne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:33:11 by sreyne            #+#    #+#             */
/*   Updated: 2020/12/08 19:33:12 by sreyne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_tab(t_tab *tab)
{
	tab->i = 0;
	tab->len = 0;
	tab->tmp = NULL;
	tab->tmp_len = 0;
	tab->tmp = (char*)malloc(sizeof(char) * 100);
}

int		ft_printf(const char *format, ...)
{
	va_list		arg;
	t_tab		*tab;
	int			len;

	tab = NULL;
	len = 0;
	if (!(tab = (t_tab*)malloc(sizeof(t_tab))))
		return (0);
	tab->format = (char*)format;
	if (format)
	{
		va_start(arg, format);
		init_tab(tab);
		form_parser(tab, arg);
		va_end(arg);
		free(tab->tmp);
	}
	len = tab->len;
	free(tab);
	return (len);
}
