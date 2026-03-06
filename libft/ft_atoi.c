/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 07:52:48 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/24 21:33:02 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_isnegative(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	long int	i;
	long int	nb;
	long int	buffer;
	long int	sign;

	i = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = ft_isnegative(str[i]);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		buffer = nb;
		nb = nb * 10 + str[i++] - '0';
		if (buffer > nb && sign == 1)
			return (-1);
		if (buffer > nb && sign == -1)
			return (0);
	}
	return ((int)(nb * sign));
}
