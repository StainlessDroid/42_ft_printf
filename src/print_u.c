/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:30:11 by mpascual          #+#    #+#             */
/*   Updated: 2020/10/06 17:42:52 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     put_u(unsigned int nb, int len, s_var *var)
{
	int n_printed;

	n_printed = 0;
	if (var->is_precision && var->precision == 0)
		return (0);
	while (var->precision > len)
	{
		n_printed += ft_putchar('0');
		var->precision--;
	}
	n_printed += ft_putnbr(nb);
	return (n_printed);
}

int     print_u(unsigned int nb, s_var *var)
{
	int    len;
	int    n_printed;
	int    pre_printed;

	len = (var->is_precision && !var->precision) ? 0 : ft_nbrlen(nb, 10);
	n_printed = 0;
	pre_printed = (var->precision > len) ? (var->precision - len) : 0;
	if (var->minus)
		n_printed += put_u(nb, len, var);
	while (var->width > (len + pre_printed))
	{
		if (var->zero && !var->is_precision)
			n_printed += ft_putchar('0');
		else
			n_printed += ft_putchar(' ');
		var->width--;
	}
	if (var->minus ==  FALSE)
		n_printed += put_u(nb, len, var);
	return (n_printed);
}

unsigned int	minus(s_var *var)
{
	unsigned int    i;

	i = 1;
	var->zero = FALSE;
	var->minus = TRUE;
	return (i); 
}
