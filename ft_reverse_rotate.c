/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 09:03:27 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/23 03:32:54 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_rra(t_stack **stack_a)
{
	t_stack		*temp;

	temp = *stack_a;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_a;
	*stack_a = temp;
	while (temp->next != *stack_a)
		temp = temp->next;
	temp->next = NULL;
	ft_put_position(stack_a);
	ft_putstr_fd("rra\n", 1);
	return (1);
}

int	ft_rrb(t_stack **stack_b)
{
	t_stack		*temp;

	temp = *stack_b;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_b;
	*stack_b = temp;
	while (temp->next != *stack_b)
		temp = temp->next;
	temp->next = NULL;
	ft_put_position(stack_b);
	ft_putstr_fd("rrb\n", 1);
	return (1);
}

int	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*temp;

	temp = *stack_a;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_a;
	*stack_a = temp;
	while (temp->next != *stack_a)
		temp = temp->next;
	temp->next = NULL;
	ft_put_position(stack_a);
	temp = *stack_b;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack_b;
	*stack_b = temp;
	while (temp->next != *stack_b)
		temp = temp->next;
	temp->next = NULL;
	ft_put_position(stack_b);
	ft_putstr_fd("rrr\n", 1);
	return (1);
}
