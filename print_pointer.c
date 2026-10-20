/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:27:00 by ncano-co          #+#    #+#             */
/*   Updated: 2026/10/20 17:13:54 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_pointer(void *ptr)
{
	unsigned long	address;
	int				count;

	if (ptr == NULL)
		return (0);
	address = (unsigned long)ptr;
	print_char('0');
	print_char('x');
	count = 2 +print_hex_lower(address);
	return (count);
}

// #include "stdio.h"

// int main(void) {
//     int numero = 42;
//     char letra = 'Z';
//     char *texto = "Prueba";
//     print_pointer(&numero);
// 	printf("%p", &numero);
// 	print_char('\n');
//     print_pointer(&letra);
// 	printf("%p", &letra);
// 	print_char('\n');
//     print_pointer(texto);
// 	printf("%p", &texto);
// 	print_char('\n');
//     return 0;
// }
