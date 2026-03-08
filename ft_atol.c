/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 07:52:48 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/08 06:31:09 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static long	ft_isnegative(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

long	ft_atol(const char *str)
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
	return (nb * sign);
}
