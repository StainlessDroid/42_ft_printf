/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_diu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:29:35 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/30 19:04:21 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     print_di(int nb, s_var *var)
{
    unsigned int		len;
    unsigned int		n_printed;

    len = ft_nbrlen(nb, 10);
    n_printed = 0;
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
    unsigned int        len;
    unsigned int        n_printed;

    len = ft_nbrlen(nb, 10);
    n_printed = 0;
    while (var->precision > len)
    {
        n_printed += ft_putchar('0');
        var->precision--;
    }
    n_printed += ft_putnbr(nb);
    return (n_printed);
}