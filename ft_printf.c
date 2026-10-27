/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:41:55 by ncano-co          #+#    #+#             */
/*   Updated: 2026/10/27 07:42:38 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *format, ...)
{
	int	count;
	int i;
	va_list arg;
	
	i = 0;
	va_start(arg, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char c = va_arg(arg, int);
				count += print_char(c);
			}
			else if (format[i] == 's')
			{
				char *str = va_arg(arg, char *);
				count += print_string(str);
			}
			

			
			
		}
		i++;
	}


	va_end(arg);
	return (count);
	
	// gestionar un null como primer argumento
	// Es posible que el char const * sea el número de argumentos que nos pasan???
	// Sino el último argumento que nos pasen debe ser NULL y así hacemos un while de que mientras va_arg no sea null o algo así
	// El va_arg lo suelen meter en un bucle
	
	// recorremos la cadena del char const y si no es un % lo escribimos con un write.
	// Cuando nos encontremos un % tendremos que ver cual es el especificador que nos pasa para saber que tipo de dato debemos extraer de la lista de argumentos usando va_arg()
	// ¿¿Quiza usar un switch para ver que letra va??

	// Devuelve el número de caracteres impresos (incluyedo letras espacios, números y saltos de linea). Si ocurrre un error devuelve un valor negativo (-1).
}
