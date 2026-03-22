/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handling.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:46:01 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/22 13:25:45 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_isallint(int argc, char *argv[])
{
	long	nb;
	int		arg;

	nb = 0;
	arg = 1;
	while (arg < argc)
	{
		nb = ft_atol(argv[arg]);
		if (nb < -2147483648 || nb > 2147483647)
			ft_error_message("Error\n");
		arg++;
	}
}

static void	ft_isalldigit(int argc, char *argv[])
{
	int	arg;
	int	i;

	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while ((argv[arg][i] >= 9 && argv[arg][i] <= 13) ||
				argv[arg][i] == ' ')
			i++;
		if (argv[arg][i] == '+' || argv[arg][i] == '-')
			i++;
		while (argv[arg][i])
		{
			if (argv[arg][i] >= '0' && argv[arg][i] <= '9')
				i++;
			else
				ft_error_message("Error\n");
		}
		arg++;
	}
}

static void	ft_matrixcmp(int argc, char *argv[])
{
	int	arg1;
	int	arg2;
	int	i;

	arg1 = 1;
	while (arg1 < argc - 1)
	{
		arg2 = arg1 + 1;
		while (arg2 < argc)
		{
			i = 0;
			while (argv[arg1][i] == argv[arg2][i] && argv[arg1][i])
				i++;
			if (argv[arg1][i] == argv[arg2][i])
				ft_error_message("Error\n");
			arg2++;
		}
		arg1++;
	}
}

void	ft_error_handling(int argc, char **argv)
{
	if (argc <= 2)
		ft_error_message("Error\n");
	ft_isalldigit(argc, argv);
	ft_matrixcmp(argc, argv);
	ft_isallint(argc, argv);
}
