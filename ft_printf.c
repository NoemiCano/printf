/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:41:55 by ncano-co          #+#    #+#             */
/*   Updated: 2026/11/08 18:14:47 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_eva_format(char const *format, int i, va_list arg)
{
	int	count;

	count = 0;
	if (format[i] == 'c')
		count += print_char(va_arg(arg, int));
	else if (format[i] == 's')
		count += print_string(va_arg(arg, char *));
	else if (format[i] == 'p')
		count += print_pointer(va_arg(arg, void *));
	else if (format[i] == 'd' || format[i] == 'i')
		count += print_integer(va_arg(arg, int));
	else if (format[i] == 'u')
		count += print_int_unsigned(va_arg(arg, unsigned int));
	else if (format[i] == 'x')
		count += print_hex_lower(va_arg(arg, unsigned int));
	else if (format[i] == 'X')
		count += print_hex_upper(va_arg(arg, unsigned int));
	else if (format[i] == '%')
		count += print_percentage(format[i]);
	return (count);
}

int	ft_printf(char const *format, ...)
{
	int		count;
	int		i;
	va_list	arg;

	i = 0;
	count = 0;
	va_start(arg, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_eva_format(format, i, arg);
		}
		else
			count += print_char(format[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
