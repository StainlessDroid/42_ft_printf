/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:08:59 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/16 19:39:50 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void init_flags(void)
{
	struct variables	var;

	var.printed_chars = 0;
	var.precision = 0;
	var.width = 0;
	var.minus = FALSE;
	var.zero = FALSE;
	var.point = FALSE;
	var.asterisk = FALSE;
	var.error = FALSE;
}

int     is_flag(char c)
{
    if (c == '-' || c == '0' || c == '.' || c == '*')
        return (1);
    else
        return (0);    
}

int		is_type(char c)
{
	if (c == 'c' || c == 'i' || c == 'd' || c == 'u' || c == 'x' 
		|| c == 'X' || c == 'p')
		return (1);
	else
		return (0);
}
