/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:57:43 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/14 09:31:55 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*v;

	i = 0;
	v = (unsigned char *)s;
	while (i < n)
	{
		if (v[i] == (unsigned char)c)
			return (&v[i]);
		i++;
	}
	return (NULL);
}
