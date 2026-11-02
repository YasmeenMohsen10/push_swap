/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:37:36 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/11 17:12:30 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
		if(ft_isprint(' '))
				printf("Mineee: Yess :)\n");
		else
				printf("Mineee: NO :(\n");
		if(isprint(' '))
				printf("Built in: Yess :)\n");
		else
				printf("Built in: NO :(\n");
}*/
