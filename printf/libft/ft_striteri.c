/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 08:22:53 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/06 09:06:45 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (!s || !f)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}
/*
void	fun(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = *c + 3;i
}

#include <stdio.h>

int main ()
{
	char str[] = "Yasmeen";
	printf("OLD STRING :%s\n", str);
	ft_striteri(str, fun);
	printf("NEW STRING :%s\n", str);
}*/
