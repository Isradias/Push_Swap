/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 07:54:13 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/14 07:54:14 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n >= 10 || n <= -10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = ft_numlen(n);
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strlcpy(ptr, "-2147483648", 12);
		return (ptr);
	}
	ptr[len--] = '\0';
	if (n < 0)
		n *= -1;
	if (n == 0)
		ptr[len--] = '0';
	while (n > 0)
	{
		ptr[len--] = n % 10 + '0';
		n /= 10;
	}
	if (len == 0)
		ptr[0] = '-';
	return (ptr);
}
