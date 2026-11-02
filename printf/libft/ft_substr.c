/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:35:34 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/14 10:05:37 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_size;
	char	*ptr;

	if (!s)
		return (NULL);
	s_size = ft_strlen(s);
	if (start >= s_size)
		len = 0;
	else if (len > s_size - start)
		len = s_size - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, (s + start), len);
	ptr[len] = '\0';
	return (ptr);
}
/*#include <stdio.h>
int	main(void)
{
	char	str[] = "";
	char	*ptr = ft_substr(str, 3, 20);
	printf("substring :%s", ptr);
	free(ptr);
	return (0);
}*/
