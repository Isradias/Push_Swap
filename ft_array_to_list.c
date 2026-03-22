/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_to_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 23:08:57 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/22 13:26:03 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_put_index(t_stack **head, int *ordered_array)
{
	int		i;
	t_stack	**aux;

	aux = head;
	while ((*aux)->next)
	{
		i = 0;
		while (ordered_array[i] != (*aux)->value)
			i++;
		(*aux)->index = i + 1;
		aux = &(*aux)->next;
	}
	i = 0;
	while (ordered_array[i] != (*aux)->value)
		i++;
	(*aux)->index = i + 1;
}

t_stack	*ft_array_to_list(int argc, int *unordered_array, int *ordered_array)
{
	t_stack	*stack_a;
	t_stack	*aux;

	stack_a = ft_lstnew(unordered_array[argc - 2]);
	argc--;
	while (0 <= argc - 2)
	{
		aux = ft_lstnew(unordered_array[argc - 2]);
		ft_lstadd_front(&stack_a, aux);
		argc--;
	}
	ft_put_position(&stack_a);
	ft_put_index(&stack_a, ordered_array);
	free(unordered_array);
	free(ordered_array);
	return (stack_a);
}
