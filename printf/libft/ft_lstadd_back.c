/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:14:58 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/12 11:29:17 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*n1= ft_lstnew("NODE 4");
	t_list	*n2 = ft_lstnew("NODE 3");
	t_list	*n3 = ft_lstnew("NODE 2");
	t_list	*n4 = ft_lstnew("NODE 1");
	t_list	*last;
	if(!n1 || !n2 ||!n3 || !n4)
	{
		printf("wrong");
		return (1);
	}
	t_list *head = n1;
	ft_lstadd_front(&head, n2);
	ft_lstadd_front(&head, n3);
	ft_lstadd_front(&head, n4);
	t_list	*ptr = head;
	int i = 1;
	t_list	*n5 = ft_lstnew("NODE 5");
	ft_lstadd_back(&head, n5);
	while (ptr)
	{
		printf("NODE at index : %i  is :%s\n", i,(char	*) ptr->content);
		i++;
		ptr = ptr->next;
	}
	last = ft_lstlast(head);
	printf("The last node is :%s", (char *)last->content);
	free(n5);
	free(n4);
	free(n3);
	free(n2);
	free(n1);
	return (0);
}*/
