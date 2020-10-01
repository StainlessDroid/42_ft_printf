/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_xp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:33:01 by mpascual          #+#    #+#             */
/*   Updated: 2020/10/01 21:59:42 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     print_x(unsigned int nb, bool mayus, s_var *var)
{
	int		            len;
    unsigned int        n_printed;

    len = ft_nbrlen(nb, 16);
    n_printed = 0;
    if (var->minus)
        n_printed += ft_itohex(nb, mayus);
    while (var->precision > len)
    {
    	n_printed += ft_putchar('0');
    	var->precision--;
    }
    if (var->minus == FALSE)
        n_printed += ft_itohex(nb, mayus);
    return (n_printed);
}

int     print_p(unsigned long nb, s_var *var)
{
    int             n_printed;
    int             len;

    n_printed = 0;
    len = ft_nbrlen(nb, 16) + 2;

    if (var->minus)
    {
        n_printed += ft_putstr("0x");
        n_printed += ft_itohex(nb, FALSE);
    }
    while(var->width > len)
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