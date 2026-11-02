/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 12:03:25 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/04 12:32:07 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*#include <stdio.h>
int	main(void)
{
	char	*str = "Yasmeen";
	t_list	*node1 = ft_lstnew(str);
	if (node1 == NULL)
	{
		printf("Failed \n");
	}
	else
		printf("The node saved correctly and the content is :%s\n",
			(char *)node1->content);
	free(node1);
}*/
