/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_cost.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 00:16:13 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/23 02:12:33 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_cost_b(t_stack **stack_b)
{
	t_stack	*aux;
	int		len;

	len = ft_list_len(*stack_b);
	aux = *stack_b;
	while (aux)
	{
		if (aux->pos <= len / 2)
		{
			if (len % 2 == 0 && aux->pos == len / 2 && aux->cost_a < 0)
				aux->cost_b = aux->pos * -1;
			else
				aux->cost_b = aux->pos;
		}
		else
			aux->cost_b = aux->pos - len;
		aux = aux->next;
	}
}

static t_stack	*ft_list_min(t_stack *stack_a)
{
	t_stack	*aux;

	aux = stack_a;
	while (stack_a)
	{
		if (stack_a->index < aux->index)
			aux = stack_a;
		stack_a = stack_a->next;
	}
	return (aux);
}

static void	ft_cost_a(t_stack *target, t_stack **aux_b, t_stack *stack_a)
{
	if (target->pos <= ft_list_len(stack_a) / 2)
		(*aux_b)->cost_a = target->pos;
	else
		(*aux_b)->cost_a = target->pos - ft_list_len(stack_a);
}

void	ft_put_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*aux_a;
	t_stack	*aux_b;
	t_stack	*target;

	aux_b = *stack_b;
	while (aux_b)
	{
		aux_a = *stack_a;
		target = aux_b;
		while (aux_a)
		{
			if (aux_a->index < target->index && aux_a->index > aux_b->index)
				target = aux_a;
			if (aux_a->index > target->index && target == aux_b)
				target = aux_a;
			aux_a = aux_a->next;
		}
		if (target == aux_b)
			target = ft_list_min(*stack_a);
		ft_cost_a(target, &aux_b, *stack_a);
		aux_b = aux_b->next;
	}
	ft_cost_b(stack_b);
}
