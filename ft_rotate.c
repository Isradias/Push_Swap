/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 05:31:50 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/23 03:32:24 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_ra(t_stack **stack_a)
{
	t_stack		*temp;

	temp = *stack_a;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_a;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	ft_put_position(stack_a);
	ft_putstr_fd("ra\n", 1);
	return (1);
}

int	ft_rb(t_stack **stack_b)
{
	t_stack		*temp;

	temp = *stack_b;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_b;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	ft_put_position(stack_b);
	ft_putstr_fd("rb\n", 1);
	return (1);
}

int	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*temp;

	temp = *stack_a;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_a;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	ft_put_position(stack_a);
	temp = *stack_b;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_b;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	ft_put_position(stack_b);
	ft_putstr_fd("rr\n", 1);
	return (1);
}
