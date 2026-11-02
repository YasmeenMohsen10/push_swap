/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 13:32:05 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/05 18:17:26 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*void del(void *content)
{
	free(content);
}
#include <stdio.h>

int	main(void)
{
	int		*r;
	int		*n;
	int		*t;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;
	t_list	*head;

	int *i= malloc(4);
	r = malloc(4);
	*r = 7;
	n = malloc(4);
	*n = 0;
	t = malloc(4);
	*t = 6;
	*i = 123;
	n1 = ft_lstnew(i);
	n2 = ft_lstnew(r);
	n3 = ft_lstnew(n);
	n4 = ft_lstnew(t);
	if (!n1 || !n2 || !n3 || !n4)
		return (1);
	head = n1;
	ft_lstadd_back(&head, n2);
	ft_lstadd_back(&head, n3);
	ft_lstadd_back(&head, n4);
	ft_lstclear(&head, del);
	if (!head)
		printf("list cleared :)");
	else
		printf("not cleared");
}
*/
