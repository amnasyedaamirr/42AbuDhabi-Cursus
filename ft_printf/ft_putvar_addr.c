/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvar_addr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:41:29 by aaamir            #+#    #+#             */
/*   Updated: 2022/07/04 21:22:46 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_putvar_addr(unsigned long nbr, char *base_digits)
{
	int	count;

	count = 2;
	if (nbr >= 16)
	{
		count += ft_putvar_addr(nbr / 16, base_digits);
		count += ft_putvar_addr(nbr % 16, base_digits);
	}
	else
	{
		ft_putchar_fd(base_digits[nbr], 1);
		count++;
	}
	return (count);
}
