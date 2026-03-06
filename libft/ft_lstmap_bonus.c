/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:05:01 by icaldas-          #+#    #+#             */
/*   Updated: 2025/11/26 22:54:33 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	new_lst = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
#include <stdio.h>

void	ft_printlst(void *content)
{
	printf("%s\n", (char *)content);
}

void	*ft_to_five(void *content)
{
	return ("5");
}

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

	ft_lstiter(ft_lstmap(node1, &ft_to_five, ft_printlst), ft_printlst);
	return (0);
}*/
