/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:33:01 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/15 18:39:49 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     print_x(unsigned int nb, bool mayus)
{
    unsigned int        i;
    struct variables    var;

    i = ft_itohex(nb, FALSE);
    var.printed_chars += i;
    return (i);
}

int     print_X(unsigned int nb, bool mayus)
{
    unsigned int        i;
    struct variables    var;

    i = ft_itohex(nb, TRUE);
    var.printed_chars += i;
    return (i);
}
