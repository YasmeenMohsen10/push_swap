/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 08:51:02 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/14 08:59:36 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	size;

	if (!s)
		return ;
	size = ft_strlen(s);
	write(fd, s, size);
	write(fd, "\n", 1);
}
/*#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	char	str[] = "yasmeen";
	char *name = "test.txt";
	int fd = open(name, O_WRONLY |O_CREAT |O_TRUNC , 0655);
	if (fd == -1)
	{
		printf("ERRORRRRR");
		return 1;
	}
	ft_putendl_fd(str, fd);
	return (0);
}
*/
