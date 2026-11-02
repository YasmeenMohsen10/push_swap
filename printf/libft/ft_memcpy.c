/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:47:05 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/06 10:08:02 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*destt;
	const unsigned char	*srcc;

	count = 0;
	destt = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	while (count < n)
	{
		destt[count] = srcc[count];
		count++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	int *src = malloc(sizeof(int));
	*src = 88;
	int *dst = malloc(sizeof(int));
	dst = (int *)ft_memcpy(dst, src, 4);
	printf("the dst after copying :%d", *dst);
}*/
