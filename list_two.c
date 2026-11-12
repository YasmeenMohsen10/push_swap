/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:41:56 by ralshraw          #+#    #+#             */
/*   Updated: 2026/11/12 22:14:56 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lstsize(our_node *lst)
{
	int	count;
	our_node			*str;

	count = 0;
	str = lst;
	if (!lst)
		return (0);
	while (str)
	{
		str = str -> next;
		count++;
	}
	return (count);
}
void	lstadd_front(our_node **lst, our_node *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}