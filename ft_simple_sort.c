/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 23:09:45 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/18 01:24:01 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_sort_three(t_stack **stack_a, int a, int b, int c)
{
	if (a < b && a < c)
	{
		ft_rra(stack_a);
		ft_sa(stack_a);
	}
	else if (a > b)
	{
		if (b > c)
		{
			ft_ra(stack_a);
			ft_sa(stack_a);
		}
		else if (b < c && a > c)
			ft_ra(stack_a);
		else
			ft_sa(stack_a);
	}
	else
		ft_rra(stack_a);
}

void	ft_simple_sort(t_stack **stack_a)
{
	t_stack	*aux;
	int		a;
	int		b;
	int		c;

	aux = (*stack_a)->next;
	if (!aux->next)
	{
		ft_sa(stack_a);
		return ;
	}
	a = (*stack_a)->value;
	b = aux->value;
	c = (aux->next)->value;
	ft_sort_three(stack_a, a, b, c);
}
