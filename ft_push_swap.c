/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 06:03:10 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/23 04:06:07 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

#include <stdio.h> /*Printf aqui*/
/*
static void	ft_print_list(t_stack *list)
{
	while (list)
	{
		printf("Value: %d\n", list->value);
		printf("Pos: %d\n", list->pos);
		printf("Index: %d\n", list->index);
		printf("Cost_a: %d\n", list->cost_a);
		printf("Cost_b: %d\n\n", list->cost_b);
		list = list->next;
	}
	printf("---------------------------------------\n\n");
}*/

static void	ft_pb_all(t_stack **stack_a, t_stack **stack_b, int len_a)
{
	int		len_total;

	len_total = len_a;
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

static t_stack	*ft_find_cheaper(t_stack *stack_b)
{
	t_stack	*aux;
	long	total_cost;
	long	cheaper;

	aux = stack_b;
	cheaper = ft_labs(aux->cost_a) + ft_labs(aux->cost_b);
	while (stack_b)
	{
		total_cost = ft_labs(stack_b->cost_a) + ft_labs(stack_b->cost_b);
		if (total_cost < cheaper)
		{
			aux = stack_b;
			cheaper = total_cost;
		}
		stack_b = stack_b->next;
	}
	return (aux);
}

static void	ft_to_pa(t_stack *to_pa, t_stack **stack_a, t_stack **stack_b)
{
		while (to_pa->cost_a != 0 || to_pa->cost_b != 0)
		{
			if (to_pa->cost_a > 0 && to_pa->cost_b > 0)
			{
				to_pa->cost_a--;
				to_pa->cost_b -= ft_rr(stack_a, stack_b);
			}
			else if (to_pa->cost_a < 0 && to_pa->cost_b < 0)
			{
				to_pa->cost_a++;
				to_pa->cost_b += ft_rrr(stack_a, stack_b);
			}
			else if (to_pa->cost_a > 0)
				to_pa->cost_a -= ft_ra(stack_a);
			else if (to_pa->cost_a < 0)
				to_pa->cost_a += ft_rra(stack_a);
			else if (to_pa->cost_b > 0)
				to_pa->cost_b -= ft_rb(stack_b);
			else
				to_pa->cost_b += ft_rrb(stack_b);
		}
		ft_pa(stack_a, stack_b);
}

static void	ft_full_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*aux;

		ft_pb_all(stack_a, stack_b, ft_list_len(*stack_a));
	if (*stack_b == NULL)
		return ;
	while (*stack_b)
	{
		ft_put_cost(stack_a, stack_b);
		aux = ft_find_cheaper(*stack_b);
		ft_to_pa(aux, stack_a, stack_b);
	}
	aux = *stack_a;
	while (aux->index != 1)
		aux = aux->next;
	if (aux->pos <= ft_list_len(*stack_a) / 2)
	{
		while ((*stack_a)->index != 1)
			ft_ra(stack_a);
	}
	else
	{
		while ((*stack_a)->index != 1)
			ft_rra(stack_a);
	}
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
	
	ft_full_sort(&stack_a, &stack_b);
	/*
	printf("STACK_A:\n");
	ft_print_list(stack_a);

	printf("STACK_B:\n");
	ft_print_list(stack_b);
*/
	ft_free_list(stack_a);
	ft_free_list(stack_b);

	return (0);
}
