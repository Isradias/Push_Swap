/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:46:01 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/06 12:59:18 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void ft_isint(int argc, char *argv[])
{
	long	nb;
	long	negative;
	int		i;

	while (argc > 0)
	{
		nb = 0;
		i = 0;
		negative = 0;

		if (argv[argc][0] == '-' || argv[argc][0] == '+')
			i++;
		if (argv[argc][0] == '-')
			negative = 1;
		while (argv[argc][i])
		{
			nb = 10 * nb + argv[argc][i] - '0';
			if ((negative == 1 && nb * -1 < INT_MIN) || nb > INT_MIN)
			{
				ft_printf("Error\n");
				exit(1);
			}
			i++;
		}
		argc--;
	}
}

static void	ft_isalldigit(int argc, char *argv[])
{
	int	arg;
	int i;

	arg = 1; 
	while (arg <= argc)
	{
		i = 0;
		while (argv[arg][i])
		{
			if (argv[arg][i] < '0' || argv[arg][i] > '9')
			{
				ft_printf("Error\n");
				exit(1);
			}
			i++;
		}
		*argv++;
	}
}

static int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

static void ft_matrixcmp(int argc, char *argv[])
{
	int	arg1;
	int	arg2;
	int	i;

	arg1 = 1;
	while (arg1 < argc)
	{
		arg2 = arg1 + 1;
		while (arg2 < argc)
		{
			i = 0;
			while (argv[arg1][i] == argv[arg2][i] && argv[arg1][i])
				i++;
			if (argv[arg1][i] == argv[arg2][i])
			{
				ft_printf("Error\n");
				exit(1);
			}
			arg2++;
		}
		arg1++;
	}
}

void	error_handling(int argc, char *argv[])
{
	if (argc <= 1)
	{
		ft_printf("Error\n");
		exit(1);
	}
	ft_isalldigit(argc, *argv[]); /*TRodos os argumentos são números*/
	ft_matrixcmp(argc, *argv[]); /*Verificar se todos os argumentos são diferentes entre si*/
	ft_isint(argc, *argv[]);
}
