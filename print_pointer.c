/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:27:00 by ncano-co          #+#    #+#             */
/*   Updated: 2026/11/08 18:19:01 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Function for %p
int	print_pointer(void *ptr)
{
	unsigned long	address;
	int				count;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	address = (unsigned long)ptr;
	print_char('0');
	print_char('x');
	count = 2 + print_hex_lower(address);
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