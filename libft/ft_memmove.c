/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 07:54:48 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/14 07:54:50 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_str;
	const char	*src_str;

	i = 0;
	dest_str = (char *)dest;
	src_str = (const char *)src;
	if (dest_str > src_str)
	{
		while (n > 0)
		{
			n--;
			dest_str[n] = src_str[n];
		}
	}
	if (dest_str < src_str)
	{
		while (i < n)
		{
			dest_str[i] = src_str[i];
			i++;
		}
	}
	return (dest);
}
