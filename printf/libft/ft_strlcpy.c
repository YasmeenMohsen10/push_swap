/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:05:05 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/06 12:28:39 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_leng;
	size_t	i;

	src_leng = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && i < src_leng)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_leng);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Yasmeen";
	char dest[6] = "uuuuu";
	ft_strlcpy(dest, src, sizeof(dest));
	printf("%s\n", dest);
}*/
