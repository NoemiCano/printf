/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_base16.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:43:48 by ncano-co          #+#    #+#             */
/*   Updated: 2026/10/20 16:43:42 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// Esta va a ser el de %x
int	print_hex_lower(unsigned long nbr)
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
		if (nbr >= 16)
		{
			prin = nbr % 16;
			print_hex_lower(nbr / 16);
			write (1, &hex_digits[prin], 1);
		}
		if (nbr < 16 && nbr != 0)
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

// Esta va a ser el de %X
int	print_hex_upper(unsigned long nbr)
{
	int		count;
	char	*hex_digits;
	int		prin;

	count = 0;
	prin = 0;
	hex_digits = "0123456789ABCDEF";

	if (nbr == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (nbr >= 0)
	{
		count++;
		if (nbr >= 16)
		{
			prin = nbr % 16;
			print_hex_upper(nbr / 16);
			write (1, &hex_digits[prin], 1);
		}
		if (nbr < 16 && nbr != 0)
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