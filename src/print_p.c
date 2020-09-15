/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:59:41 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/15 19:01:24 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     print_p(unsigned long nb)
{
    unsigned int        i;
    struct variables    var;

    i = ft_putstr(ft_itoa(nb));
    var.printed_chars += 1;
    return (i);
}