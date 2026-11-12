/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:49:19 by ralshraw          #+#    #+#             */
/*   Updated: 2026/11/12 14:58:55 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

our_node	*lstlast(our_node *lst)
{
	our_node	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next)
	{
		last = last->next;
	}
	return (last);
}
void	lstadd_back(our_node **lst, our_node *new)
{
	our_node	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = lstlast(*lst);
	last->next = new;
}
our_node *lstnew(int content)
{
	our_node	*node;

	node = malloc(sizeof(our_node));
	if (node == NULL)
		return (NULL);
	node -> number = content;
	node -> next = NULL;
	return (node);
}
void	lstdelone(our_node *lst)
{
	if (!lst)
		return ;
	free(lst);
}
void	lstclear(our_node **lst)
{
	our_node	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		lstdelone(*lst);
		*lst = temp;
	}
	*lst = NULL;
}