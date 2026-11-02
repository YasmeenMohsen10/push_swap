/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 13:54:17 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/14 09:07:52 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
		if(ft_isdigit('6'))
				printf("Mineee: Yess :)\n");
		else
				printf("Mineee: NO :(\n");
		if(isdigit('6'))
				printf("Built in: Yess :)\n");
		else
				printf("Built in: NO :(\n");
}*/
