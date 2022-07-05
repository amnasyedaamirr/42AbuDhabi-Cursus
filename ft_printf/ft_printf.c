/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:00:38 by aaamir            #+#    #+#             */
/*   Updated: 2022/07/05 22:33:31 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_print_formats(const char *format, va_list *va)
{
	int		len;

	len = 0;
	if (*format == 'c')
		len += ft_putchar_fd(va_arg(*va, int), 1);
	else if (*format == 's')
		len += ft_putstr_fd(va_arg(*va, char *), 1);
	else if (*format == 'd' || *format == 'i')
		len += ft_putnbr_fd(va_arg(*va, int), 1);
	else if (*format == 'u')
		len += ft_putnbr_base(va_arg(*va, unsigned int), 10, "0123456789");
	else if (*format == 'x')
		len += ft_putnbr_base(va_arg(*va, unsigned int),
				16, "0123456789abcdef");
	else if (*format == 'X')
		len += ft_putnbr_base(va_arg(*va, unsigned int),
				16, "0123456789ABCDEF");
	else if (*format == '%')
		len += ft_putchar_fd('%', 1);
	else if (*format == 'p')
	{
		ft_putstr_fd("0x", 1);
		len += ft_putvar_addr(va_arg(*va, unsigned long), "0123456789abcdef");
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	va;

	len = 0;
	va_start(va, str);
	while (*str)
	{
		if (!str)
		{
			ft_putstr_fd("(null)", 1);
			va_end(va);
			return (len);
		}
		if (*str == '%')
			len += ft_print_formats(++str, &va);
		else
			len += ft_putchar_fd(*str, 1);
		str++;
	}
	va_end(va);
	return (len);
}
