/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 18:56:34 by mpascual          #+#    #+#             */
/*   Updated: 2020/11/13 03:04:30 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../header.h"

int				i = -4004;
unsigned int	ui = 69047;
char			*s = "Lorem ipsum dolor sit amet";
int				*ptr = &i;

int		putnbr(int nb)
{
	long	int		num;
	num = nb;

	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
	{
		putnbr(num / 10);
		ft_putchar(num % 10 + '0');
	}
	else
		ft_putchar(num + '0');
}

int     main(void)
{
	//printf("%-05")i;
	putnbr(printf("desde%4.07c%4.07s%4.07p%4.07d%4.07u%4.07xhasta\n", 'F', s, ptr, i, ui, ui));

	//ft_printf("%-05");
	putnbr(ft_printf("desde%4.07c%4.07s%4.07p%4.07d%4.07u%4.07xhasta\n", 'F', s, ptr, i, ui, ui));

	return (0);
}

