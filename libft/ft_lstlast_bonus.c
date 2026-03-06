/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:57:40 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/26 21:06:20 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("1");
	node2 = ft_lstnew("2");
	node3 = ft_lstnew("3");

	node1->next = node2;
	node2->next = node3;

	printf("Nó esperado: %p\n", node3);
	printf("Retorno na função: %p\n", ft_lstlast(node1));
	printf("Numero da função: %s\n", (char *)ft_lstlast(node1)->content);
	return (0);
}*/
