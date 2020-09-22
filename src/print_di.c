/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:29:35 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/15 18:32:19 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     print_di(int nb)
{
    struct variables    var;
    char				*nbstr;
    unsigned int		len;
    unsigned int		printed_chars;

    nbstr = ft_itoa(nb);
    len = ft_strlen(nbstr);
    printed_chars = 0;
    while (var.precision > len)
    {
    	printed_chars += ft_putchar('0');
    	var.precision--;
    }
    printed_chars += ft_putstr(nbstr);
    return (printed_chars);
}