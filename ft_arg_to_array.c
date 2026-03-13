/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_to_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 18:56:52 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/12 22:51:38 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_already_ordered(int argc, int *array)
{
	int	i;

	i = 0;
	while (i < argc - 2)
	{
		if (array[i] < array[i + 1])
			i++;
		else
			break ;
	}
	if (i == argc - 2)
	{
		free(array);
		exit(1);
	}
}

int	*ft_arg_to_array(int argc, char **argv)
{
	int	*stack_a;
	int	i;

	stack_a = malloc((argc - 1) * sizeof(int));
	i = 0;
	if (stack_a == NULL)
		ft_error_message("Malloc error in ft_arg_to_array.\n");
	while (i < argc - 1)
	{
		stack_a[i] = (int)ft_atol(argv[i + 1]);
		i++;
	}
	ft_already_ordered(argc, stack_a);
	return (stack_a);
}
/*
int	main(int argc, char **argv)
{
	int	*array;
	int	i;

	i = 0;
	array = ft_arg_to_array(argc, argv);
	while (i < argc - 1)
	{
		printf("%d", array[i]);
		i++;
	}
	free(array);
	return (0);
}*/
