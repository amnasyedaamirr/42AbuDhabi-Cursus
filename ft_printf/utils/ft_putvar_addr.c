/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvar_addr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:41:29 by aaamir            #+#    #+#             */
/*   Updated: 2022/07/06 21:04:42 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../ft_printf.h"

int	ft_putvar_addr(unsigned long nbr, char *base_digits)
{
	int	count;

	count = 0;
	if (nbr >= 16)
	{
		count += ft_putvar_addr(nbr / 16, base_digits);
		count += ft_putvar_addr(nbr % 16, base_digits);
	}
	else
	{
		ft_print_char(base_digits[nbr], 1);
		count++;
	}
	return (count);
}
