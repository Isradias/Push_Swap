/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:07:13 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/26 21:20:03 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	node1 = ft_lstnew(&"1");
	node2 = ft_lstnew(&"2");
	node3 = ft_lstnew(&"3");
	node4 = ft_lstnew(&"4");

	node1->next = node2;
	node2->next = node3;

	ft_lstadd_back(&node1, node4);
	printf("%s\n", (char *)ft_lstlast(node1)->content);
	return (0);
}*/
