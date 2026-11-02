/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:23:06 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/09/28 18:20:59 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *bigg, const char *littlee, size_t len)
{
	size_t				i;
	size_t				j;
	const unsigned char	*big;
	const unsigned char	*little;

	big = (const unsigned char *)bigg;
	little = (const unsigned char *)littlee;
	if (little[0] == '\0')
		return ((char *)bigg);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (j + i) < len && little[j] != '\0')
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)bigg + i);
		i++;
	}
	return (NULL);
}
