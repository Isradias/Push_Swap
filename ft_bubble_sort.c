/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 18:44:23 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/10 10:18:37 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int *ft_array_cpy(int argc, int *array)
{
	int	*cpy;
	int	i;

	cpy = malloc((argc - 1) * sizeof(int));
	i = 0;
	if (cpy == NULL)
		ft_error_message("Malloc error in ft_array_cpy.\n");
	while (i < argc - 1)
	{
		cpy[i] = array[i];
		i++;
	}
	return (cpy);
}

static void	ft_swap_array(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	*ft_bubble_sort(int argc, int *array)
{
	int	i;
	int j;
	int	*ordered;

	i = 0;
	j = argc - 1;
	ordered = ft_array_cpy(argc, array);
	while (j > 0)
	{
		i = 0;
		while (i < j - 1)
		{
			if (ordered[i] > ordered[i + 1])
				ft_swap_array(ordered + i, ordered + i + 1);
			i++;
		}
		j--;
	}
	return (ordered);
}
/*
int	main(void)
{
	int array[] = {1, 4, 2, 8, 7, 6};
	int	*ordered;
	int	i;

	ordered = ft_bubble_sort(7, array);
	i = 0;
	while (i < 7 - 1)
	{
		printf("%d", ordered[i]);
		i++;
	}
	free(ordered);
	return (0);
}*/
