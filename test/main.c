/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 18:56:34 by mpascual          #+#    #+#             */
/*   Updated: 2020/10/06 20:08:59 by mpascual         ###   ########.fr       */
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
	//printf("%s\n", NULL);
	//printf("%.03s\n", NULL);

	ft_printf("%s\n", NULL);
	ft_printf("%.05s\n", NULL);

	return (0);
}
