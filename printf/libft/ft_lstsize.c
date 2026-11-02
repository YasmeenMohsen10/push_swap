/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 14:43:23 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/04 15:32:03 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;
	t_list			*ptr;

	ptr = lst;
	size = 0;
	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*n1 = ft_lstnew("Yasmeen");
	t_list  *n2 = ft_lstnew(" Mohammed");
	t_list  *n3 = ft_lstnew(" Ibrahim");
	t_list  *n4 = ft_lstnew(" Muhsen");
	if (!n1 || !n2 || !n3 || !n4)
	{
		free(n1);
		free(n2);
		free(n3);
		free(n4);
		printf("NULL\n");
		return (1);
	}
	t_list *head = n1;
	ft_lstadd_front(&head, n2);
	ft_lstadd_front(&head, n3);
	ft_lstadd_front(&head, n4);
	printf("the size of linked list :%u",ft_lstsize(head));
	free(n4);
	free(n3);
	free(n2);
	free(n1);
	return (0);
}*/
