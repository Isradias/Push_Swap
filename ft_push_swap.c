/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 06:03:10 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/16 09:20:52 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

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

int	main(int argc, char **argv)
{
	int *unordered;
	int *ordered;
	t_stack *stack_a;
	t_stack *aux;

	ft_error_handling(argc, argv);
	unordered = ft_arg_to_array(argc, argv);
	ordered = ft_bubble_sort(argc, unordered);
	stack_a = ft_array_to_list(argc, unordered, ordered);

	ft_print_list(stack_a);
	ft_sa(&stack_a);
	ft_print_list(stack_a);
	ft_ra(&stack_a);
	ft_print_list(stack_a);
	ft_rra(&stack_a);
	ft_print_list(stack_a);

	while (stack_a)
	{
		aux = stack_a->next;
		free(stack_a);
		stack_a = aux;
	}
	free(stack_a);
	return (0);
}
