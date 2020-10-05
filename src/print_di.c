/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_diu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:29:35 by mpascual          #+#    #+#             */
/*   Updated: 2020/10/04 20:04:28 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int             put_di(int nb, unsigned int len, s_var *var)
{
    unsigned int    n_printed;

    n_printed = 0;
    if (var->is_precision && var->precision == 0)
        return (0);
    if (nb < 0)
    {
        n_printed += ft_putchar('-');
        nb *= -1;
    }
    while (var->precision > len)
    {
    	n_printed += ft_putchar('0');
    	var->precision--;
    }
    n_printed += ft_putnbr(nb);
    return (n_printed);
}

unsigned int    di_width(unsigned int len, bool neg, s_var *var)
{
    unsigned int n_printed;

    n_printed = 0;
    while (var->width > len)
    {
        if (var->zero && !var->is_precision)
        {
            if (neg)
            {
                n_printed += ft_putchar('-');
                neg = FALSE;
                var->nb_neg = TRUE;
            }
            n_printed += ft_putchar('0');
        }
        else
            n_printed += ft_putchar(' ');
        var->width--;
    }
    return (n_printed);
}

int             print_di(int nb, s_var *var)
{
    unsigned int    len;
    unsigned int	n_printed;
    unsigned int    pre_printed;
    bool            neg;

    len = (var->is_precision && !var->precision) ? 0 : ft_nbrlen(nb, 10);
    n_printed = 0;
    pre_printed = (var->precision > len) ? (var->precision - len) : 0;
    neg = (nb < 0) ? TRUE : FALSE;
    if (nb < 0)
        pre_printed++;
    if (var->minus)
        n_printed += put_di(nb, len, var);
    n_printed += di_width((len + pre_printed), neg, var);
    nb *= var->nb_neg ? -1 : 1;
    if (var->minus == FALSE)
        n_printed += put_di(nb, len, var);
    return (n_printed);
}
