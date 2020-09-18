/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 18:56:34 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/16 19:43:54 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../header.h"


int				i1 = 11074;
int				i2 = -4004;
unsigned int	ui1 = 69047;
unsigned int	ui2 = 0;
unsigned long	ul = 694201170000;
char			c1 = '?';
char			c2 = ' ';
char			*s1 = "Lorem ipsum dolor sit amet";
char			*s2 = "caca¡'º12º208‚?<+`ç¨Ç´^\\@@'&%#||=0)(";


int     main(void)
{
    //printf("\033[0;32m");   // Set printf color output to GREEN

    //printf("Decimal integers:%d\n%i\n", i1, i2);
    ft_printf("Decimal integers:%d\n%i\n", i1, i2);
    //printf("Hexadecimal:%x\n%X\n", ui1, ui1);
    ft_printf("Hexadecimal:%x\n%X\n", ui1, ui1);
    //printf("Characters:%c\n%c\n", c1, c2);
    ft_printf("Characters:%c\n%c\n", c1, c2);
    //printf("Strings:%s\n%s\n", s1, s2);
    ft_printf("Strings:%s\n%s\n", s1, s2);
    return (0);
}
