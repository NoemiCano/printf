/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_base16.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:43:48 by ncano-co          #+#    #+#             */
/*   Updated: 2026/11/08 18:19:13 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Function for %x
int	print_hex_lower(unsigned long nbr)
{
	int		count;
	char	*hex_digits;

	count = 0;
	hex_digits = "0123456789abcdef";
	if (nbr >= 16)
		count += print_hex_lower(nbr / 16);
	count += write(1, &hex_digits[nbr % 16], 1);
	return (count);
}

// Function for %X
int	print_hex_upper(unsigned long nbr)
{
	int		count;
	char	*hex_digits;

	count = 0;
	hex_digits = "0123456789ABCDEF";
	if (nbr >= 16)
		count += print_hex_upper(nbr / 16);
	count += write(1, &hex_digits[nbr % 16], 1);
	return (count);
}

// int main(void)
// {
// 	print_hex_upper(0); // Pinta 0
// 	write (1, "\n", 1);
// 	print_hex_upper(15); // Pinta f
// 	write (1, "\n", 1);
// 	print_hex_upper(16); // Pinta 10
// 	write (1, "\n", 1);
// 	print_hex_upper(42); // Pinta 2a
// 	write (1, "\n", 1);
// 	print_hex_upper(255); // Pinta ff
// 	write (1, "\n", 1);
// 	print_hex_upper(1024); // Pinta 400
// 	write (1, "\n", 1);
// 	print_hex_upper(4294967295); // Pinta ffffffff
// }