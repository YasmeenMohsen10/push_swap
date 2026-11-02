/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:07:22 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/11 16:55:47 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*ptr;

	size = ft_strlen(s);
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{	char *ptr;
	ptr = ft_strdup(NULL);
	printf("your string :%s\n", ptr);
	free(ptr);
	/////////////////////
		char *built;
		built = strdup(NULL);
		printf("built in string :%s", built);
			free(built);
	return (0);

}*/
