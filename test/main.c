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

struct test_variables
{
    int         i1;
    int         i2;
    unsigned int    ui1;
    unsigned int    ui2;
    unsigned long   ul;
    char            c1;
    char            c2;
    char            *s1;
    char            *s2;
};

void    init_tvars(void)
{
    struct test_variables   t_var;

    t_var.i1 = 11074;
    t_var.i2 = -4004;
    t_var.ui1 = 69047;
    t_var.ui2 = 0;
    t_var.ul = 694201170000;
    t_var.c1 = '?';
    t_var.c2 = ' ';
    t_var.s1 = "Lorem ipsum dolor sit amet";
    t_var.s2 = "caca¡'º12º208‚?<+`ç¨Ç´^\\@@'&%#||=0)(";
}

int     main(void)
{
    struct test_variables   t_var;

    init_tvars();
    printf("\033[0;32m");   // Set printf color output to GREEN

    //printf("Decimal integers:%d\n%i\n", t_var.i1, t_var.i2);
    ft_printf("Decimal integers:%d\n%i\n", t_var.i1, t_var.i2);
    //printf("Hexadecimal:%x\n%X\n", t_var.ui1, t_var.ui1);
    ft_printf("Hexadecimal:%x\n%X\n", t_var.ui1, t_var.ui1);
    //printf("Characters:%c\n%c\n", t_var.c1, t_var.c2);
    ft_printf("Characters:%c\n%c\n", t_var.c1, t_var.c2);
    //printf("Strings:%s\n%s\n", t_var.s1, t_var.s2);
    ft_printf("Strings:%s\n%s\n", t_var.s1, t_var.s2);
    return (0);
}
