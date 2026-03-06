/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:50:20 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/26 20:34:35 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

void	printList(t_list *head) {
	if (head) {
		t_list *aux;
		aux = head;
		int pos = 1;
		while (aux) {
			printf("pos: %d\n", pos);
			printf("endereço atual: %p\n", aux);
			printf("valor: %d\n", *(int *)aux->content);
			printf("endereço next: %p\n\n", aux->next);
			pos++;
			aux = aux->next;
		}
	}
}

int	main(int argc, char *argv[])
{
	(void)argc;

	int	i = 1;
	int	j = 2;
	int	k = 3;

	t_list	**head;

	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew(&i);
	node2 = ft_lstnew(&j);
	node3 = ft_lstnew(&k);

	node1->next = node2;
	// printList(node1);

	head = &node1;
	ft_lstadd_front(head, node3);

	printList(node3);

	printf("%d\n", *(int *)node1->content);
	printf("%d\n", *(int *)node2->content);
	printf("%d\n", *(int *)node3->content);


	printf("\n");
	return (0);
}*/
