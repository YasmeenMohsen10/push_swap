/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 13:54:17 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/14 09:05:00 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	return (1);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	if(ft_isalnum('n'))
		printf("Mineee: Yess :)\n");
	else
		printf("Mineee: NO :(\n");
	if(isalnum('n'))
				printf("Built in: Yess :)\n");
		else
				printf("Built in: NO :(\n");
}*/
