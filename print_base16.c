/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_base16.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:43:48 by ncano-co          #+#    #+#             */
/*   Updated: 2026/10/17 13:05:00 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// Esta va a ser el de %x
int	print_hex_lower(unsigned int nbr)
{
	int		count;
	char	*hex_digits;
	int		prin;

	count = 0;
	prin = 0;
	hex_digits = "0123456789abcdef";

	if (nbr == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (nbr >= 0)
	{
		count++;
		if (nbr != 0)
		{
			prin = nbr % 16;
			write (1, &hex_digits[prin], 1);
			nbr /= 16;
		}
		else
		{
			break;
		}
	}
	return (count);
}

int main(void)
{
	print_hex_lower(0); // Pinta 0
	write (1, "\n", 1);
	print_hex_lower(15); // Pinta f
	write (1, "\n", 1);
	print_hex_lower(16); // Pinta 10
	write (1, "\n", 1);
	print_hex_lower(42); // Pinta 2a
	write (1, "\n", 1);
	print_hex_lower(255); // Pinta ff
	write (1, "\n", 1);
	print_hex_lower(1024); // Pinta 400
	write (1, "\n", 1);
	print_hex_lower(4294967295); // Pinta ffffffff
}