/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:00:38 by aaamir            #+#    #+#             */
/*   Updated: 2022/06/25 18:23:30 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_printf(char *str, ...)
{
	int		i;
	int		len;
	char	c;
	char	*s;
	va_list	va;

	va_start(va, str);

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
			{
				c = (char) va_arg(va, int);
				write(1, &c, 1);
				i++;
			}
			if (str[i + 1] == 's')
			{
				s = va_arg(va, char *);
				ft_putstr_fd(s, 1);
				i++;
			}
			if (str[i + 1] == 'd' || str[i + 1] == 'i')
			{
				ft_putnbr_fd(va_arg(va, int), 1);
				i++;
			}
			if (str[i + 1] == 'u')
			{
				ft_putnbr_fd(va_arg(va, int), 1);
				i++;
			}
			i++;
		}
		write(1, &str[i], 1);
		i++;
	}
	va_end(va);
	return (len);
}

int	main()
{
	char	a;
	char	*s;

	a = '1';
	s = "Hello";
	// ft_printf("This is my printf for char %c\n", a);
	// ft_printf("This is my printf for string %s\n", "SDF4567");
	ft_printf("This is my printf for number %d\n", 0x12);
	printf("This is built-in printf for number %d\n", 0x12);
	ft_printf("This is my printf for number %i\n", -235.23);
	printf("This is built-in printf for number %i\n", -235.23);
	// ft_printf("Doing all: %c, %s, %d", a, s, 34);

	return (0);
}
