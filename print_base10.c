/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_base10.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:22:29 by ncano-co          #+#    #+#             */
/*   Updated: 2026/10/17 10:43:52 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// Esta va a ser el de %i y %d
int	print_integer(int nbr)
{
	int	count;

	count = 0;
	if (!nbr)
		return (0);
	ft_putnbr_fd(nbr, 1);
	if (nbr ==  0)
		return (1);
	while (nbr > 0)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}

// Esta va a ser el de %u
int	print_int_unsigned(unsigned int nbr)
{
	int	count;

	count = 0;
	if (!nbr)
		return (0);
	ft_putnbr_fd(nbr, 1);
	if (nbr ==  0)
		return (1);
	while (nbr > 0)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}
