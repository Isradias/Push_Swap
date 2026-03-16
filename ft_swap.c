/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 04:20:09 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/16 05:40:44 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sa(t_stack **stack_a)
{
	t_stack		*temp;
	int			pos_temp;

	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = (*stack_a)->next;
	(*stack_a)->next = temp;
	pos_temp = (*stack_a)->pos;
	(*stack_a)->pos = temp->pos;
	temp->pos = pos_temp;
}

void    ft_sb(t_stack **stack_b)
{
    t_stack **temp;

    temp = stack_b;
    *stack_b = (*stack_b)->next;
    (*temp)->next = (*stack_b)->next;
    (*stack_b)->next = *temp;
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_sa(stack_a);
	ft_sb(stack_b);
}
