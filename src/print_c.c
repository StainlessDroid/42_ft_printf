/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:27:52 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/21 17:16:05 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     print_c(char c)
{
    unsigned int        i;
    struct variables    var;

    i = ft_putchar(c);
    var.printed_chars += i;
    return (i);
}