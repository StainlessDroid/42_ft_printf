/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:40:02 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/22 19:11:07 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     print_u(unsigned int nb, s_var *var)
{
    unsigned int        i;

    i = ft_putstr(ft_itoa(nb));
    var->printed_chars += i;
    return (i);
}