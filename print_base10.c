/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_base10.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:22:29 by ncano-co          #+#    #+#             */
/*   Updated: 2026/11/08 17:50:09 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Esta va a ser el de %i y %d
int	print_integer(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nbr < 0)
	{
		count += write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		count += print_integer(nbr / 10);
	count += print_char((nbr % 10) + '0');
	return (count);
}

// Esta va a ser el de %u
int	print_int_unsigned(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr >= 10)
		count += print_int_unsigned(nbr / 10);
	count += print_char((nbr % 10) + '0');
	return (count);
}
