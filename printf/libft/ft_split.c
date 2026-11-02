/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 07:45:39 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/12 09:57:45 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_words(char const *arr, char c)
{
	size_t	num_words;
	size_t	i;

	if (!arr)
		return (0);
	num_words = 0;
	i = 0;
	while (arr[i])
	{
		if (arr[i] != c && (i == 0 || arr[i - 1] == c))
			num_words++;
		i++;
	}
	return (num_words);
}

static size_t	word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static void	freeing(char **ptr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
}

static int	filling(char **ptr, char const *s, char c)
{
	size_t	i;
	size_t	pos;
	size_t	length;

	i = 0;
	pos = 0;
	while (i < count_words(s, c))
	{
		while (s[pos] && s[pos] == c)
			pos++;
		length = word_len(s + pos, c);
		ptr[i] = malloc((length + 1) * sizeof(char));
		if (!ptr[i])
		{
			freeing(ptr, i);
			return (0);
		}
		ft_memcpy(ptr[i], s + pos, length);
		ptr[i][length] = '\0';
		pos += length;
		i++;
	}
	ptr[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = malloc((count_words(s, c) + 1) * sizeof(*ptr));
	if (!ptr)
		return (NULL);
	if (!filling(ptr, s, c))
		return (NULL);
	return (ptr);
}
/*
#include <stdio.h>

int	main()
{

	char	*str = "        Yasmeen 	Mohammed Ibrahim Muhsen    ";
	char	c = ' ';
	char	**result = ft_split(str, c);
	if (!result)
	{
		printf("allocation failed :(");
		return (1);
	}
	int i = 0;
	printf("string after split :\n");
	while (result[i])
	{
		printf("str[%d]: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
