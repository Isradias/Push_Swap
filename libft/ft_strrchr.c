/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 07:56:26 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/24 21:37:08 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		found;

	found = 0;
	while (*s != '\0')
	{
		if (*s == (unsigned char) c)
		{
			ptr = (char *)s;
			found = 1;
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	if (found == 0)
		return (NULL);
	return (ptr);
}
