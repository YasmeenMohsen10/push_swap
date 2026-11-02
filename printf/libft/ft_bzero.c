/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 18:09:23 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/14 09:42:02 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ss;

	ss = (unsigned char *)s;
	while (n > 0)
	{
		*ss = 0;
		ss++;
		n--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char str[60] = "Yasmeen";

	printf("Before bzero: ");
	for (int i = 0; i < 7; i++) {
		printf("%c", str[i]);
		}

		ft_bzero(str, 7);

		printf("\nAfter bzero:  ");
		for (int i = 0; i < 7; i++) {
				printf("%d ", str[i]);
		}
		printf("\n");
}*/
