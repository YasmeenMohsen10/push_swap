/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 12:49:30 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/14 09:01:23 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destt;
	const unsigned char	*srcc;

	if (!src && !dest)
		return (NULL);
	i = n;
	destt = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	if (destt == srcc)
		return (destt);
	else if (destt < srcc)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (i > 0)
		{
			i--;
			destt[i] = srcc[i];
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	//char	src[10] = "Yasmeen";
//	char	*dest= &src[6];
	char	*mine = ft_memmove(NULL, NULL, 2);
		char    *built = memmove(NULL, NULL, 2);

	printf("the result of dest after my memmove :%s\n" , mine);
	printf("the result of dest after built in  memmove :%s\n" , built);
}*/
