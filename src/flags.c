/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:08:59 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/14 17:09:05 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void ft_init_flags(void)
{
	struct variables	var;

	var.minus = FALSE;
	var.zero = FALSE;
	var.point = 0;
	var.precision = 0;
	var.width = 0;
}
