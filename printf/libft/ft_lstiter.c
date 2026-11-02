/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:16:06 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/06 13:03:08 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void	f(void *content)
{
	printf("%d", *(int *)content);
}
int	main(void)
{
	int i = 0;
	int y = 1;
	int v= 2;
	t_list *n1 = ft_lstnew(&i);
		t_list *n2 = ft_lstnew(&y);
		t_list *n3 = ft_lstnew(&v);

	n1->next = n2;
	n2->next = n3;
	if (!n1 || !n2 || !n3)
		return (1);
	ft_lstiter(n1, f);
	free(n3);
	free(n2);
	free(n1);
}*/
