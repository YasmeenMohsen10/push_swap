/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 07:38:23 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/14 10:21:38 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*str;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	fun(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c);
	return (c + 5);
}
#include <stdio.h>

int	main(void)
{
	char	str[] = "Yasmeen";
	char	*result = ft_strmapi(str, fun);
	printf("Old strin :%s\nNew string :%s\n", str, result);
}*/
