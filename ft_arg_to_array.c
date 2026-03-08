/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_to_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 18:56:52 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/08 19:52:32 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	*ft_arg_to_array(int argc, char **argv)
{
	int	*stack_a;
	int	i;

	stack_a = malloc((argc - 1) * sizeof(int));
	i = 0;
	if (stack_a == NULL)
	{
		printf("Malloc error in ft_arg_to_array.\n"); //forbidden function
		exit(1);
	}
	while (i < argc - 1)
	{
		stack_a[i] = (int)ft_atol(argv[i + 1]);
		i++;
	}
	return (stack_a);
}
