/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:23:22 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/30 22:11:39 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     print_c(char c, s_var *var)
{
    int     n_printed;

    n_printed = 0;
    if (var->minus)
        n_printed += ft_putchar(c);
    while(var->width > 1)
    {
        if (var->zero == TRUE)
            n_printed += ft_putchar('0');
        else
            n_printed += ft_putchar(' ');
        var->width--;
    }
    if (var->minus == FALSE)
        n_printed += ft_putchar(c);
    return (n_printed);
}

int     print_s(char *str, s_var *var)
{
    int             n_printed;
    unsigned int    len;

    n_printed = 0;
    len = ft_strlen(str);
    if (var->minus)
        n_printed += ft_putstr(str);
    while (var->width > len)
    {
        if (var->zero == TRUE)
            n_printed += ft_putchar('0');
        else
            n_printed += ft_putchar(' ');
        var->width--;
    }
    if (var->minus == FALSE)
        n_printed += ft_putstr(str);
    return (n_printed);
}
