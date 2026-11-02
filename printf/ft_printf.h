/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:36:12 by ymuhsen           #+#    #+#             */
/*   Updated: 2026/10/24 11:51:59 by ymuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_putnbr(int n);
int	ft_printf(const char *format, ...);
int	ft_puthex(unsigned long long n, char *base);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_put_pointer(void *ptr);
int	ft_put_unsigned(unsigned int n);

#endif
