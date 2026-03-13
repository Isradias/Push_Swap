/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 21:56:50 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/12 21:58:02 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_put_position(t_stack **head)
{
	int		i;
	t_stack	**aux;

	i = 1;
	aux = head;
	while ((*aux)->next)
	{
		(*aux)->pos = i;
		aux = &(*aux)->next;
		i++;
	}
	(*aux)->pos = i;
}
