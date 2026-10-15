/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:31:23 by ncano-co          #+#    #+#             */
/*   Updated: 2026/10/15 18:34:03 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// Esta va a ser el de %c
int	print_char(char c)
{
	if (c == NULL)
		return (0);
	ft_putchar_fd(c, 1);
	return (1);
}

// Esta va a ser la de %s
int	print_string(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (0);
	ft_putstr_fd(str, 1);
	while (str[count])
		count++;
	return (count);
}

// Esta va a ser el de %%
int	print_percentage(char c)
{
	if (c == NULL)
		return (0);
	ft_putchar_fd("%", 1);
	return (1);
}