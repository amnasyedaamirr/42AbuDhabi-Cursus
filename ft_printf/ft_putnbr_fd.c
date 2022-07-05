/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:42:03 by aaamir            #+#    #+#             */
/*   Updated: 2022/07/03 18:56:13 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;
	int				count;

	nbr = (unsigned int)n;
	count = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -1 * (n);
		count++;
	}
	if (nbr >= 10)
	{
		count += ft_putnbr_fd(nbr / 10, fd);
		count += ft_putnbr_fd(nbr % 10, fd);
	}
	else
	{
		ft_putchar_fd(nbr + '0', fd);
		count++;
	}
	return (count);
}
