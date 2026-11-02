/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:16:31 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/11 17:08:22 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
		if(ft_isascii('n'))
				printf("Mineee: Yess :)\n");
		else
				printf("Mineee: NO :(\n");
		if(isascii('n'))
				printf("Built in: Yess :)\n");
		else
				printf("Built in: NO :(\n");
}*/
