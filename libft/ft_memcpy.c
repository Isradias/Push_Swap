/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 07:54:38 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/14 07:54:40 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str_d;
	const char	*str_s;

	i = 0;
	str_d = (char *)dest;
	str_s = (const char *)src;
	while (i < n)
	{
		str_d[i] = str_s[i];
		i++;
	}
	return (dest);
}
