/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:00:09 by mpascual          #+#    #+#             */
/*   Updated: 2020/10/04 19:34:02 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include "libft/libft.h"
# include <stdarg.h>

typedef struct		variables
{
	int				printed_chars;
	unsigned int	width;
	unsigned int	precision;
	bool			zero;
	bool			minus;
	bool			is_precision;
}					s_var;

int				ft_printf(const char *format, ...);
void        	init_flags(s_var *var);
int				mod_putchar(char c);
int				is_type(char c);
unsigned int	find_flags(const char *format, va_list arg, s_var *var);
void			check_type(const char c, va_list arg, s_var *var);
int				print_c(char c, s_var *var);
int				print_s(char *str, s_var *var);
int				print_di(int nb, s_var *var);
int				print_u(unsigned int nb, s_var *var);
int				print_p(unsigned long ptr, s_var *var);
int				print_x(unsigned int nb, bool mayus, s_var *var);
int				ft_itohex(unsigned long nb, bool mayus);
int				get_number(const char *str);
int     		put_di(int nb, unsigned int len, s_var *var);
int     		put_u(unsigned int nb, unsigned int len, s_var *var);

#endif
