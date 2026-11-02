/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:58:35 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/11 16:38:36 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size > SIZE_MAX / nmemb)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int n = 5;
	int i =0;
	printf("Values :");
	int *ptr = ft_calloc(5, 4);
	if (ptr == NULL)
		return (1);
	while (i < n)
	{
		printf("%d ",ptr[i]);
		i++;
	}
	free(ptr);
}*/
