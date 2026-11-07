/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:41:56 by ralshraw          #+#    #+#             */
/*   Updated: 2026/11/04 12:45:31 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int	lstsize(our_node *lst)
{
	unsigned int	count;
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
