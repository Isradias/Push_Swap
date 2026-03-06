/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:44:48 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/26 20:56:38 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew(&"1");
	node2 = ft_lstnew(&"2");
	node3 = ft_lstnew(&"3");

	node1->next = node2;
	node2->next = node3;

	printf("%d\n", ft_lstsize(node1));
	return (0);
}*/
