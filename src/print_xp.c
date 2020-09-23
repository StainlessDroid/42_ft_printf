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
    unsigned int        i;

    i = ft_itohex(nb, mayus);
    var->printed_chars += i;
    return (i);
}

int     print_p(unsigned long nb, s_var *var)
{
    unsigned int        i;

    i = ft_putstr(ft_itoa(nb));
    var->printed_chars += 1;
    return (i);
}