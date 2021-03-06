/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreyne <sreyne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:33:43 by sreyne            #+#    #+#             */
/*   Updated: 2020/12/08 19:33:44 by sreyne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*print_f(t_tab *tab, va_list arg)
{
	char	*s;

	tab->p = (tab->p == -1) ? 6 : tab->p;
	if (tab->l_b == 1)
		s = ft_ftoa_long(va_arg(arg, long double), tab->p);
	else
		s = ft_ftoa(va_arg(arg, double), tab->p);
	if (tab->hash && !tab->p)
		s = ft_strjoin(s, ".");
	if (s != NULL)
		s = redactor(s, tab);
	return (s);
}
