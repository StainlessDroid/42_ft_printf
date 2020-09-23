/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:17:37 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/22 19:13:17 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

unsigned int    find_flags(const char *format, va_list arg, s_var *var)
{
    unsigned int    i;

    i = 0;
    while (!is_type(*format))
    {
        if (*format == '0')
        {
            var->zero = TRUE;
            format++;
            i++;
        }
        else if (ft_isdigit(*format))
        {
            var->width = (get_number(format++));
            i += var->width;
        }
        else if (*format == '-')
        {
            var->minus = TRUE;
            format++;
            i++;
        }
        else if (*format == '*')
        {
            var->width = va_arg(arg, unsigned int);
            format++;
            i++;
        }
        else if (*format == '.')
        {
            format++;
            if (*format == '*')
                var->precision = va_arg(arg, unsigned int);
            else
                var->precision = (get_number(format));
            i += var->precision;
        }
        else
            break;
    }
    return (i);
}

void            check_type(const char c, va_list arg, s_var *var)
{
    if ( c == 'c')
        var->printed_chars += print_c(va_arg(arg, int), var);
    else if (c == 's')
        var->printed_chars += print_s(va_arg(arg, char*), var);
    else if (c == 'd' || c == 'i')
        var->printed_chars += print_di(va_arg(arg, int), var);
    else if (c == 'u')
        var->printed_chars += print_u(va_arg(arg, unsigned int), var);
    else if (c == 'p')
        var->printed_chars += print_p(va_arg(arg, unsigned long), var);
    else if (c == 'x')
        var->printed_chars += print_x(va_arg(arg, unsigned int), FALSE, var);
    else if (c == 'X')
        var->printed_chars += print_x(va_arg(arg, unsigned int), TRUE, var);
    else if (c == '%')
        var->printed_chars += ft_putchar('%');
}

int             ft_printf(const char *format, ...)
{
    va_list     arg;
    s_var       *var;

    if (!(var = malloc(sizeof(s_var) + 1)))
        return (-1);
    va_start(arg, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            init_flags(var);
            format += find_flags(format, arg, var);
            check_type(*format, arg, var);
        }
        else
            ft_putchar(*format);
        format++;
    }
    free(var);
    va_end(arg);
    return (var->printed_chars);
}
