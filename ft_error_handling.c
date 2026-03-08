/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handling.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:46:01 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/08 06:24:00 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void ft_isint(int argc, char *argv[])
{
	long	nb;
	int		arg;

	nb = 0;
	arg = 1;
	while (arg <= argc)
	{
		nb = ft_atol(argv[arg]);
		if (nb < (long)INT_MIN || nb > (long)INT_MAX)
		{
			printf("Error\n");
			exit(1);
		}
		arg++;
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
				printf("Error\n");
				exit(1);
			}
			i++;
		}
		arg++;
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
				printf("Error\n");
				exit(1);
			}
			arg2++;
		}
		arg1++;
	}
}

void	ft_error_handling(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("Error\n"); /*Aqui precisa printar a mensagem?*/
		exit(1);
	}
	ft_isalldigit(argc, *argv[]); /*Argumentos são números*/
	ft_matrixcmp(argc, *argv[]); /*Argumentos são diferentes entre si*/
	ft_isallint(argc, *argv[]); /*Argumentos são inteiros*/
//	ft_isordered(argc, *argv[]); /*Argumentos estão ordenados
}

int	main(int argc, char *argv[])
{
	ft_error_handling(argc, &**argv);
	printf("Argumentos válidos");
}
