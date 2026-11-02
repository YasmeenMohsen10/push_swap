/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:35:02 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/05 15:18:38 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*void	delete(void *content)
{
	(void)content;
}*/
/*
#include <stdio.h>

int	main(void){
	t_list *n1 = ft_lstnew("N1");
	t_list *n2 = ft_lstnew("N2");
	t_list *n3 = ft_lstnew("N3");
	if (!n1 || !n2 || !n3)
		return (1);
	t_list *head = n1;
	ft_lstadd_back(&head, n2);
	ft_lstadd_back(&head, n3);
	//ft_lstdelone(n3, delete);
	//t_list	*h = head;
	t_list *rr = ft_lstlast(head);
	printf("last node %s\n",(((char *)(rr -> content))));
	free(n3);
	free(n2);
	free(n1);
	return (0);
}*/
