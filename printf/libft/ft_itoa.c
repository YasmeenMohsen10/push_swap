/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:48:29 by ymuhsen           #+#    #+#             */
/*											*/
/*   Updated: 2026/10/01 18:56:27 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	int_size(int n)
{
	int	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
		size++;
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	long	i;
	char	*ptr;

	size = int_size(n);
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = n;
	ptr[size] = '\0';
	if (i == 0)
		ptr[0] = '0';
	if (i < 0)
	{
		ptr[0] = '-';
		i *= -1;
	}
	while (i > 0)
	{
		size--;
		ptr[size] = (i % 10) + '0';
		i /= 10;
	}
	return (ptr);
}
/*
#include <stdio.h>
int main()
{
	int n = 0;
	char *res = ft_itoa(n);
	printf("%s", res);
	free(res);
}*/
