/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 00:58:47 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/17 02:31:36 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	temp = *stack_a;
	*stack_a = *stack_b;
	*stack_b = (*stack_b)->next;
	if (temp)
		(*stack_a)->next = temp;
	else
		(*stack_a)->next = NULL;
	ft_put_position(stack_a);
	ft_put_position(stack_b);
	ft_putstr_fd("pa\n", 1);
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	temp = *stack_b;
	*stack_b = *stack_a;
	*stack_a = (*stack_a)->next;
	if (temp)
		(*stack_b)->next = temp;
	else
		(*stack_b)->next = NULL;
	ft_put_position(stack_a);
	ft_put_position(stack_b);
	ft_putstr_fd("pb\n", 1);
}
