/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 08:38:51 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/12 10:29:07 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <stdio.h>
#include <fcntl.h>   // For open() flags (O_WRONLY, O_CREAT, O_TRUNC)
#include <unistd.h>  // For write() and close()
int	main(void)
{
	char	*filename = "text.txt";
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("error");
		return (1);
	}
	ft_putchar_fd('F', fd);
}*/
