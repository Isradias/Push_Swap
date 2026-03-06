/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 07:56:38 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/14 07:56:40 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && start < end)
		start++;
	while (ft_strchr(set, s1[end - 1]) && start < end)
		end--;
	ptr = (char *)malloc((end - start) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1 + start, end - start + 1);
	return (ptr);
}
