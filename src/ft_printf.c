/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:17:37 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/30 18:17:26 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

unsigned int    digit_flags(const char *format, s_var *var)
{
    unsigned int    i;

    i = 0;
    while (*format && ft_isdigit(*format))
    {
        if (*format == '0')
        {
            var->zero = TRUE;
            format++;
            i++;
        }
        else
        {
            var->width = get_number(format++);
            i += ft_nbrlen(var->width, 10);
            break;
        }
    }
    return (i);
}

unsigned int    find_flags(const char *format, va_list arg, s_var *var)
{
    unsigned int    i;

    i = 0;
    if (!is_type(*format))
    {
        if (*format == '-')
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
            i++;
            if (*format == '*')
                var->precision = va_arg(arg, unsigned int);
            else
                var->precision = (get_number(format));
            i += ft_nbrlen(var->precision, 10);
        }
        else
            i += digit_flags(format, var);
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
        var->printed_chars += print_c('%', var);
}

int             ft_printf(const char *format, ...)
{
    va_list     arg;
    s_var       *var;
    int         n_printed;

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
            var->printed_chars += ft_putchar(*format);
        format++;
    }
    n_printed = var->printed_chars;
    va_end(arg);
    free(var);
    return (n_printed);
}
