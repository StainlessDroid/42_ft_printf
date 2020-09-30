/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 18:56:34 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/30 18:08:18 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../header.h"

int				i1 = 11074;
int				i2 = -4004;
unsigned int	ui1 = 69047;
unsigned int	ui2 = 8;
unsigned long	ul = 694201170000;
char			c1 = 'p';
char			c2 = 'F';
char			*s1 = "Lorem ipsum dolor sit amet";
char			*s2 = "caca¡'º12º208‚?<+`ç¨Ç´^\\@@'&%#||=0)(";
int				*ptr = &i1;

int     main(void)
{
    printf("\033[0;32m");   // Set printf color output to GREEN

	//printf("Decimal integers:%d\n%i\n", i1, i2);
	ft_printf("Decimal integers:\n%.8d\n", i1);
	//printf("Hexadecimal:%.8x\n%X\n", ui1, ui1);
	ft_printf("Hexadecimal:\n%x\n%.*X\n", ui1, ui2, ui1);
	//printf("Unsigned:%.*u\n", ui2, ui1);
	ft_printf("Unsigned:\n%u\n", ui2, ui1);
	//printf("Characters:%c\n%c\n", c1, c2);
	ft_printf("Characters:\n%04c\n%c\n", c1, c2);
	//printf("Strings:%s\n%s\n", s1, s2);
	ft_printf("Strings:\n%034s\n",  s1);
	//printf("Memory Address:%p\n", ptr);
	ft_printf("Memory Address:\n%p\n", ptr);
	system ("leaks Test_ex");
	return (0);
}

