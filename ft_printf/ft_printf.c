/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:00:38 by aaamir            #+#    #+#             */
/*   Updated: 2022/07/05 20:31:24 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_print_formats(char format, va_list va)
{
	int		len;

	len = 0;
	if (format == 'c')
		len += ft_putchar_fd(va_arg(va, int), 1);
	else if (format == 's')
		len += ft_putstr_fd(va_arg(va, char *), 1);
	else if (format == 'd' || format == 'i')
		len += ft_putnbr_fd(va_arg(va, int), 1);
	else if (format == 'u')
		len += ft_putnbr_base(va_arg(va, unsigned int), 10, "0123456789");
	else if (format == 'x')
		len += ft_putnbr_base(va_arg(va, unsigned int), 16, "0123456789abcdef");
	else if (format == 'X')
		len += ft_putnbr_base(va_arg(va, unsigned int), 16, "0123456789ABCDEF");
	else if (format == '%')
		len += ft_putchar_fd('%', 1);
	else if (format == 'p')
	{
		ft_putstr_fd("0x", 1);
		len += ft_putvar_addr(va_arg(va, unsigned long), "0123456789abcdef");
	}
	return (len);
}

// int	ft_print_flags(char *format, va_list va, int i, int len)
// {
// 	int	test;

// 	test = 0;
// 	if (format[i + 1] == '#')
// 	{
// 		if (format[i + 2] == 'x')
// 			len += ft_putstr_fd("0x", 1);
// 	}
// 	else if (format[i + 1] == ' ')
// 	{
// 		test = va_arg(va, int);
// 		printf("\n\n\n----- Test is %d ------\n\n\n", test);
// 		if (test > 0)
// 			len += ft_putchar_fd(' ', 1);
// 	}
// 	else if (format[i + 1] == '+')
// 	{
// 		if (va_arg(va, int) > 0)
// 			len += ft_putchar_fd('+', 1);
// 	}
// 	return (len);
// }

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	va;

	i = 0;
	len = 0;
	va_start(va, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_print_formats(str[i], va);
		}
		else
			len += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(va);
	return (len);
}

int	main(void)
{
	int	i;

	i = 567;
	ft_printf("This is a char - %c and %c\n", 'a', 'b');
	ft_printf("This is a string - %s %s\n", "Amna", "Aamir");
	ft_printf("This is a decimal number - %d and %d\n", -42, 42);
	ft_printf("This is a i number - %i and %i\n", -234, 234);
	ft_printf("This is a pointer address number - %p\n", i);
	ft_printf("This is a hexa small number - %x\n", 15);
	ft_printf("This is a hexa capital number - %X\n", 15);
	ft_printf("This is a unsigned number - %u\n", -65);
	ft_printf("This is a hastag testing - %#x\n\n", i);
	ft_printf("This is a space testing -\n% d\n% d\n\n\n", 555, -555);

	// printf("This is a char - %c and %c\n", 'a', 'b');
	// printf("This is a string - %s %s\n", "Amna", "Aamir");
	// printf("This is a decimal number - %d and %d\n", -42, 42);
	// printf("This is a i number - %i and %i\n", -234, 234);
	// printf("This is a pointer address number - %p\n", i);
	// printf("This is a hexa small number - %x\n", 15);
	// printf("This is a hexa capital number - %X\n", 15);
	// printf("This is a unsigned number - %u\n", -65);
	// printf("This is a hastag testing - %#x\n", i);
	// printf("This is a space testing -\n% d\n% d\n\n\n", 555, -555);
	// if (str[i + 1] == '#' || str[i + 1] == ' ' || str[i + 1] == '+' )
			// {
			// 	len += ft_print_flags(str, va, i, len);
			// 	i++;
			// }

	return (0);
}
