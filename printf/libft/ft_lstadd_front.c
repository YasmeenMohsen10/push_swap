/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 12:33:36 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/04 14:41:11 by ymuhsen          ###   ########.fr       */
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
/*#include <stdio.h>
int	main(void)
{
	int		nen;
	t_list	*node1;
	t_list	*node2;
	t_list	*head;

	nen = 1;
	node1 = ft_lstnew(&nen);
	node2 = ft_lstnew(NULL);
	if (node1 == NULL || node2 == NULL)
		{
			free(node1);
			free(node2);
			return (1);
		}
			head = node1;
	ft_lstadd_front(&head, node2);
	if (head->next->content && head->content)
	printf("congrats :)");
else
printf("CHEACK ERRORRRR ");
}
*/
