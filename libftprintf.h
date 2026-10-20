/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:39:04 by ncano-co          #+#    #+#             */
/*   Updated: 2026/10/20 16:51:06 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(char const *, ...);
int	print_integer(int nbr);
int	print_int_unsigned(unsigned int nbr);
int	print_hex_lower(unsigned long nbr);
int	print_hex_upper(unsigned long nbr);
int	print_char(char c);
int	print_string(char *str);
int	print_percentage(char c);



#endif