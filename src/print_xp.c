/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_xp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:33:01 by mpascual          #+#    #+#             */
/*   Updated: 2020/10/02 19:55:33 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     put_x(unsigned int nb, unsigned int len, bool mayus, s_var *var)
{
    unsigned int    n_printed;

    n_printed = 0;
    if (!len)
        return (0);
    while (var->precision > len)
    {
    	n_printed += ft_putchar('0');
    	var->precision--;
    }
    n_printed += ft_itohex(nb, mayus);
    return (n_printed);
}

int     print_x(unsigned int nb, bool mayus, s_var *var)
{
	unsigned int	len;
    unsigned int    n_printed;

    len = ft_nbrlen(nb, 16);
    n_printed = 0;
    if (var->is_precision && var->precision < len)
        len = var->precision;
    if (var->minus)
        n_printed += put_x(nb, len, mayus, var);
    while (var->width > len)
    {
        if (var->zero)
    	    n_printed += ft_putchar('0');
        else
            n_printed += ft_putchar(' ');
    	var->width--;
    }
    if (var->minus == FALSE)
        n_printed += put_x(nb, len, mayus, var);
    return (n_printed);
}

int     print_p(unsigned long nb, s_var *var)
{
    unsigned int    n_printed;
    unsigned int    len;

    n_printed = 0;
    len = ft_nbrlen(nb, 16) + 2;
    if (var->minus)
    {
        n_printed += ft_putstr("0x");
        n_printed += ft_itohex(nb, FALSE);
    }
    while (var->width > len)
    {
        if (var->zero == TRUE)
            n_printed += ft_putchar('0');
        else
             n_printed += ft_putchar(' ');
        var->width--;
    }
    if (var->minus == FALSE)
    {
        n_printed += ft_putstr("0x");
        n_printed += ft_itohex(nb, FALSE);
    }
    return (n_printed);
}