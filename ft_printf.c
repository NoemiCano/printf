/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:41:55 by ncano-co          #+#    #+#             */
/*   Updated: 2026/10/15 16:31:29 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *, ...)
{

	// gestionar un null como primer argumento
	// Es posible que el char const * sea el número de argumentos que nos pasan???
	// Sino el último argumento que nos pasen debe ser NULL y así hacemos un while de que mientras va_arg no sea null o algo así
	// El va_arg lo suelen meter en un bucle
	
	int	count;
	
	count = 0;
	
	// recorremos la cadena del char const y si no es un % lo escribimos con un write.
	// Cuando nos encontremos un % tendremos que ver cual es el especificador que nos pasa para saber que tipo de dato debemos extraer de la lista de argumentos usando va_arg()
	// ¿¿Quiza usar un switch para ver que letra va??

	// Devuelve el número de caracteres impresos (incluyedo letras espacios, números y saltos de linea). Si ocurrre un error devuelve un valor negativo (-1).
}
