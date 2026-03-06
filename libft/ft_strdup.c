/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 07:55:24 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/14 07:55:26 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	n;
	char	*ptr;

	n = ft_strlen(s);
	ptr = (char *)malloc((n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[n] = '\0';
	while (n > 0)
	{
		n--;
		ptr[n] = s[n];
	}
	return (ptr);
}
