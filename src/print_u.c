/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:40:02 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/15 18:54:04 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     print_u(unsigned int nb)
{
    unsigned int        i;
    struct variables    var;

    i = ft_putstr(ft_itoa(nb));
    var.printed_chars += i;
    return (i);
}