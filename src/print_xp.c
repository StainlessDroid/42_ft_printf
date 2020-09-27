/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:33:01 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/23 17:14:19 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     print_x(unsigned int nb, bool mayus, s_var *var)
{
	unsigned int		len;
    unsigned int        n_printed;

    len = ft_nbrlen(nb, 16);
    n_printed = 0;
    while (var->precision > len)
    {
    	n_printed += ft_putchar('0');
    	var->precision--;
    }
    n_printed += ft_itohex(nb, mayus);
    return (n_printed);
}

int     print_p(unsigned long nb, s_var *var)
{
    int             n_printed;
    unsigned int    len;

    n_printed = 0;
    len = ft_nbrlen(nb, 10);
    while(var->width > len)
    {
        if (var->zero == TRUE)
            n_printed += ft_putchar('0');
        else
            n_printed += ft_putchar(' ');
        var->width--;
    }
    n_printed += ft_putstr(ft_itoa(nb));
    return (n_printed);
}