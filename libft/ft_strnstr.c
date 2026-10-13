/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncano-co <ncano-co@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:46:57 by ncano-co          #+#    #+#             */
/*   Updated: 2026/10/02 16:36:44 by ncano-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s);
	while (i < n && s[i])
	{
		j = 0;
		while (s[i + j] == s2[j] && (i + j) < n)
		{
			if (!s2[j + 1])
				return ((char *)&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
