/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:39:04 by ncano-co          #+#    #+#             */
/*   Updated: 2026/11/08 12:39:19 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(char const *format, ...);
int	print_integer(int nbr);
int	print_int_unsigned(unsigned int nbr);
int	print_hex_lower(unsigned long nbr);
int	print_hex_upper(unsigned long nbr);
int	print_char(char c);
int	print_string(char *str);
int	print_percentage(char c);
int	print_pointer(void *ptr);

#endif