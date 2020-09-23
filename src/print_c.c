/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:27:52 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/22 19:10:22 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     print_c(char c, s_var *var)
{
    unsigned int        i;

    i = 0;
    while (var->width > 1)
    {
    	i += ft_putchar(' ');
    	var->width--;
    }
    i += ft_putchar(c);
    return (i);
}