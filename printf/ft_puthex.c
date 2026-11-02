/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 10:56:29 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/24 11:23:06 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_puthex(n / 16, base);
	}
	count += write(1, &base[n % 16], 1);
	return (count);
}
/*#include <stdio.h>
int	main(void)
{
int	num = 42;
int	result = ft_puthex(num, "0123456789abcdef");
printf("\nresult :%d", result);
}*/
