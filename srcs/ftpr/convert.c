/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreyne <sreyne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:32:14 by sreyne            #+#    #+#             */
/*   Updated: 2020/12/08 19:32:16 by sreyne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_type(t_tab *tab, va_list arg)
{
	if (tab->type == 'd' || tab->type == 'i' ||
	tab->type == 'D' || tab->type == 'I')
		print_int_d_i(tab, arg);
	else if (tab->type == 'u' || tab->type == 'U')
		print_int_u(tab, arg);
	else if (tab->type == 'c' || tab->type == 'C')
		print_c(tab, arg);
	else if (tab->type == 's' || tab->type == 'S')
		print_str(arg, tab);
	else if (tab->type == 'o' || tab->type == 'O')
		print_o(tab, arg, 8);
	else if (tab->type == 'x' || tab->type == 'X')
		print_x(tab, arg);
	else if (tab->type == 'p' || tab->type == 'P')
		print_p(tab, arg);
	else if (tab->type == 'b' || tab->type == 'B')
		print_o(tab, arg, 2);
	else if (tab->type == 'f' || tab->type == 'F')
		print_f(tab, arg);
	else if (tab->type == '%')
		print_percent(tab);
}
