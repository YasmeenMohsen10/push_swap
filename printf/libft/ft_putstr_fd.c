/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 08:44:15 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/14 08:59:08 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	size;

	if (!s)
		return ;
	size = ft_strlen(s);
	write(fd, s, size);
}
/*
#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	char	*name = "test.txt";
	int fd = open(name, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		printf("error");
		return (1);
	}	
	char	str[] = "Yasmeen";
	ft_putstr_fd(str, fd);
	return (0);
}*/
