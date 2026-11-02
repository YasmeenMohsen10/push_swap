/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:51:16 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/11 18:19:21 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_leng;
	size_t	dst_leng;
	size_t	j;

	src_leng = ft_strlen(src);
	j = 0;
	dst_leng = 0;
	while (dst_leng < size && dst[dst_leng] != '\0')
		dst_leng++;
	if (dst_leng == size)
		return (size + src_leng);
	i = dst_leng;
	while (i < size - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_leng + src_leng);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	char	dest[90] = "Yasmeen ";
	char	*src = "Mohsen";
	ft_strlcat(dest, src, 90);
	printf("the dest after cat :%s", dest);
}*/
