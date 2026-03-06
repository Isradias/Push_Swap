/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 07:57:46 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/14 07:57:48 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s_char;

	i = 0;
	s_char = (const unsigned char *)s;
	while (i < n)
	{
		if (s_char[i] == (unsigned char)c)
			return ((void *)&s_char[i]);
		i++;
	}
	return (NULL);
}
