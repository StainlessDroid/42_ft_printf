/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:23:22 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/22 19:10:58 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int     print_s(char *str, s_var *var)
{
    unsigned int        i;

    i = ft_putstr(str);
    var->printed_chars += i;
    return (i);
}