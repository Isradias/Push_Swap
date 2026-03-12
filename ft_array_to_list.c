/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_to_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 23:08:57 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/12 04:10:52 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_put_position(t_stack **head)
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

t_stack *ft_array_to_list(int argc, int *unordered_array)
{
	int		i;
	t_stack	*stack_a;
	t_stack	*aux;

	i = 0;
	stack_a = ft_lstnew(unordered_array[argc - 2]);
	argc--;
	while (0 <= argc - 2)
	{
		aux = ft_lstnew(unordered_array[argc - 2]);
		ft_lstadd_front(&stack_a, aux);
		argc--;
	}
	ft_put_position(&stack_a);
	return (stack_a);
}

int	main(void)
{
	t_stack	*stack_a;
	t_stack	*aux;
	int		a[] = {1, 3, 5, 2, 4, 6};
	int		argc = 7;

	stack_a = ft_array_to_list(argc, a);
	aux = stack_a;
	while (aux->next)
	{
		printf("Value: %d\n", aux->value);
		printf("Pos: %d\n", aux->pos);
		aux = aux->next;
	}
	printf("Value: %d\n", aux->value);
	printf("Pos: %d\n", aux->pos);
	return (0);
}
