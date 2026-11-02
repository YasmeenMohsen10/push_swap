/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 17:37:14 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/09/27 17:40:55 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Y :%c \n",ft_tolower('Y'));
	printf("k :%c \n",ft_tolower('k'));
	printf("; :%c \n",ft_tolower(';'));


}*/
