/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:25:18 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/12 12:15:21 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*list;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, new_node);
		lst = lst->next;
	}
	return (list);
}
/*
void *f(void *content)
{
	char	*str;
	char	*new;

	str = (char *)content;
	new = malloc(ft_strlen(content) + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, str, ft_strlen(str) + 1);
	new[0] = ft_toupper(new[0]);
	return (new);
}
void	del(void *content)
{
	free(content);
}
#include <stdio.h>

int	main(void)
{
	t_list *n1 = ft_lstnew(ft_strdup("yasmeen"));
	t_list *n2 = ft_lstnew(ft_strdup("baba"));
	t_list *n3 = ft_lstnew(ft_strdup("mama"));
	t_list *n4 = ft_lstnew(ft_strdup("mays"));
	t_list *n5 = ft_lstnew(ft_strdup("leen"));
	t_list *n6 = ft_lstnew(ft_strdup("nana"));
	t_list *n7 = ft_lstnew(ft_strdup("abood"));
	if (!n1 || !n2 || !n3 || !n4 || !n5 || !n6 || !n7)
	{
		printf("allocation failed");
		return (1);
	}
	t_list *head = n1;
	ft_lstadd_back(&head, n2);
	ft_lstadd_back(&head, n3);
	ft_lstadd_back(&head, n4);
	ft_lstadd_back(&head, n5);
	ft_lstadd_back(&head, n6);
	ft_lstadd_back(&head, n7);
	t_list *mapped= ft_lstmap(head, f, del);
	if(!mapped)
	{
		printf("allocation failed");
		return 1;
	}
	t_list *temp = mapped;
	while(temp)
	{
		printf("the content :%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&mapped, del);
	ft_lstclear(&head, del);
	return (0);

}*/
