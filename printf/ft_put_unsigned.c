/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsgined.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:46:25 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/24 12:56:33 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_put_unsigned(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_put_unsigned(n / 10);
	c = n % 10 + '0';
	count += write(1, &c, 1);
	return (count);
}
/*#include <stdio.h>
int	main(void)
{
	unsigned int n = -4;
	printf("the actual output: %u\n", n);
	int count = ft_put_unsigned(n);
	printf("\nnumber of digits:%d", count);

}*/
