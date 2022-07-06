/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:41:29 by aaamir            #+#    #+#             */
/*   Updated: 2022/07/06 21:04:37 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../ft_printf.h"

int	ft_putnbr_base(unsigned int nb, unsigned int base, char *base_digits)
{
	int	count;

	count = 0;

	if (nb >= base)
	{
		count += ft_putnbr_base((nb / base), base, base_digits);
		count += ft_putnbr_base((nb % base), base, base_digits);
	}
	else
	{
		ft_print_char(base_digits[nb], 1);
		count++;
	}
	return (count);
}
