/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:09:11 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/14 10:14:50 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	size;
	size_t	i;
	char	*ptr;

	if (!s1)
		return (NULL);
	start = 0;
	size = ft_strlen(s1);
	while (s1[start] != '\0' && is_set(s1[start], set))
		start++;
	end = size;
	while (end > start && is_set(s1[end - 1], set))
		end--;
	ptr = malloc((end - start + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		ptr[i++] = s1[start++];
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	const char set[] = "Yas";
	const char s1[] = "YasyYasyYas";
	char *ptr = ft_strtrim(s1, set);
	printf("Last one :%s \nNew one :%s", s1, ptr);
	free(ptr);
	ptr = NULL;
	return (0);
}*/
