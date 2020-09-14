/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:00:09 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/14 17:08:08 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include "libft/libft.h"
# include <stdarg.h>

struct		variables
{
	unsigned int printed_chars;
	unsigned int argc;
	unsigned int	width;
	unsigned int	precision;
	bool			zero;
	bool			minus;
	bool			point;
	bool			escape;
	bool			flag;
};

int			ft_printf(const char *format, ...);
void        ft_init_flags(void);
int			ft_nbrlen(int nb, int base_len);
void 		ft_putscape(char c);
int			ft_itohex(unsigned int nb, bool mayus);

#endif
