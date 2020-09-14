/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:03:06 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/14 20:07:41 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     mod_putchar(char c)
{
    struct variables    var;
    
    if (c == '%' || c == '\\')
        return (0);
    else
    {
        putchar(c);
        var.printed_chars++;
        return (1);
    }
}

void    put_scape(char c)
{
    struct variables var;

    if (c == 'n')
        write(1, "\n", 1);
    else if (c == '%')
        var.printed_chars += ft_putchar('%');
    else if (c == 't')
        write(1, "\t", 1);
    else
    {
        ft_putstr("Error\nInvalid scape character");
        var.error = TRUE;
    }        
}

int     ft_nbrlen(int nb, int base_len)
{
    unsigned int n_digits;
    bool         neg;

    neg = nb < 0 ? TRUE : FALSE;
    n_digits = 0;
    while (nb / base_len > 0)
    {
        n_digits++;
        nb /= base_len;
    }
    if (neg)
        n_digits++;
    return (n_digits);
}

/*
** ft_itohex requires a boolean parameter to specify if the alphabetic
** characters of the hex number are mayus
*/

int     ft_itohex(unsigned int nb, bool  mayus)
{
    unsigned int   num;
    unsigned int    l;
    int             a;

    a = mayus ? 55 : 87;
    num = nb;
    l = 0;
    if (num < 0)
    {
        ft_putchar('-');
        l++;
        num *= -1;
    }
    else if (num >= 16)
    {
        ft_itohex(num / 16, mayus);
        ft_putchar(num % 16 + (num % 16 >= 9 ? a : '0'));
        l++;
    }
    else
    {
        ft_putchar(num + (num % 16 >= 9 ? a : '0'));
        l++;
    }
    return (l);
}
