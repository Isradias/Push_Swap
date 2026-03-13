/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 06:03:10 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/12 23:36:57 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

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

	aux = stack_a;
	while (aux->next)
	{
		printf("Value: %d\n", aux->value);
		printf("Pos: %d\n", aux->pos);
		printf("Index: %d\n\n", aux->index);
		aux = aux->next;
	}
	printf("Value: %d\n", aux->value);
	printf("Pos: %d\n", aux->pos);
	printf("Index: %d\n", aux->index);
	while (stack_a)
	{
		aux = stack_a->next;
		free(stack_a);
		stack_a = aux;
	}
	free(stack_a);
	return (0);
}
