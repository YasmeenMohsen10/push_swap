/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:43:13 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/11 17:38:25 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
		const char	*str = NULL;
	size_t mine = ft_strlen(str);
	size_t built = strlen(str);
	printf("size of Mine: %zu\n", mine);
	printf("size of Built in: %zu\n", built);
}*/
