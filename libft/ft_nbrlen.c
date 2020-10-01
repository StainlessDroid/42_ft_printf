/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:49:38 by mpascual          #+#    #+#             */
/*   Updated: 2020/10/01 21:14:01 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int     ft_nbrlen(long nb, int base_len)
{
    long        n_digits;
    bool        neg;

    neg = nb < 0 ? TRUE : FALSE;
    n_digits = 1;
    while (nb / base_len > 0)
    {
        n_digits++;
        nb /= base_len;
    }
    if (neg)
        n_digits++;
    return (n_digits);
}
