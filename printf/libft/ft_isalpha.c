/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 13:54:17 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/14 10:33:46 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
		if(ft_isalpha(200))
				printf("Mineee: Yess :)\n");
		else
				printf("Mineee: NO :(\n");
		if(isalpha(200))
				printf("Built in: Yess :)\n");
		else
				printf("Built in: NO :(\n");
}*/
