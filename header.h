/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:00:09 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/14 20:07:40 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include "libft/libft.h"
# include <stdarg.h>

struct		variables
{
	unsigned int printed_chars;
	unsigned int	width;
	unsigned int	precision;
	bool			flag;
	bool			zero;
	bool			minus;
	bool			point;
	bool			error;

};

int			ft_printf(const char *format, ...);
void        init_flags(void);
int			mod_putchar(char c);
int			ft_nbrlen(int nb, int base_len);
void		put_scape(char c);
int			ft_itohex(unsigned int nb, bool mayus);
int			find_flags(const char *str);
void		check_type(const char c, va_list arg);
int			print_c(char c);
int			print_s(char *str);
int			print_di(int nb);
int			print_u(unsigned int nb);
int			print_p(unsigned long ptr);
int			print_x(unsigned int nb, bool mayus);

#endif
