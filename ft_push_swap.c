/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 06:03:10 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/22 13:51:01 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

#include <stdio.h> /*Printf aqui*/

static void	ft_print_list(t_stack *list)
{
	while (list)
	{
		printf("Value: %d\n", list->value);
		printf("Pos: %d\n", list->pos);
		printf("Index: %d\n\n", list->index);
		list = list->next;
	}
	printf("---------------------------------------\n\n");
}

static void	ft_full_sort(t_stack **stack_a, t_stack **stack_b, int len_a)
{
	int		len_total;

	len_total = len_a;
	if (len_a <= 3)
	{
			ft_simple_sort(stack_a);
		return ;
	}
	while (len_a > 3 && len_a > len_total / 2)
	{
		if ((*stack_a)->index <= (len_total / 2) + (len_total % 2))
		{
			ft_pb(stack_a, stack_b);
			len_a--;
		}
		else
			ft_ra(stack_a);
	}
	while (len_a > 3)
	{
		ft_pb(stack_a, stack_b);
		len_a--;
	}
	ft_simple_sort(stack_a);
}

int	main(int argc, char **argv)
{
	int *unordered;
	int *ordered;
	t_stack *stack_a;
	t_stack *stack_b;

	ft_error_handling(argc, argv);
	unordered = ft_arg_to_array(argc, argv);
	ordered = ft_bubble_sort(argc, unordered);
	stack_a = ft_array_to_list(argc, unordered, ordered);
	
	ft_full_sort(&stack_a, &stack_b, ft_list_len(stack_a));

	printf("STACK_A:\n");
	ft_print_list(stack_a);

	printf("STACK_B:\n");
	ft_print_list(stack_b);

	ft_free_list(stack_a);
	ft_free_list(stack_b);

	return (0);
}
