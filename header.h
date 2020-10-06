/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:00:09 by mpascual          #+#    #+#             */
/*   Updated: 2020/10/06 19:51:03 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include "libft/libft.h"
# include <stdarg.h>

typedef struct		s_var
{
	int				printed_chars;
	int				width;
	int				precision;
	unsigned int	format_pos;
	bool			zero;
	bool			minus;
	bool			is_precision;
	bool			nb_neg;
}					t_var;

int					ft_printf(const char *format, ...);
void        		init_flags(t_var *var);
int					mod_putchar(char c);
int					is_type(char c);
unsigned int		find_flags(const char *format, va_list arg, t_var *var);
void				check_type(const char c, va_list arg, t_var *var);
int					print_c(char c, t_var *var);
int					print_s(char *str, t_var *var);
int					print_di(int nb, t_var *var);
int					print_u(unsigned int nb, t_var *var);
int					print_p(unsigned long ptr, t_var *var);
int					print_x(unsigned int nb, bool mayus, t_var *var);
int					ft_itohex(unsigned long nb, bool mayus);
int					get_number(const char *str);
int					get_precision(const char *format, va_list arg, t_var *var);
int     			put_di(int nb, int len, t_var *var);
int     			put_u(unsigned int nb, int len, t_var *var);
unsigned int    	minus(t_var *var);
unsigned int    	star(t_var *var, va_list arg);

#endif
