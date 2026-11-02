/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 08:56:47 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/14 09:02:36 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	if (str == NULL)
		return ;
	ft_putstr_fd(str, fd);
	free(str);
}
/*#include <stdio.h>
int	main(void)
{
	int n = 0;
	ft_putnbr_fd(n, 1);
	return (0);
}*/
