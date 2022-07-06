/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:42:03 by aaamir            #+#    #+#             */
/*   Updated: 2022/07/06 21:04:10 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_nbr(int n, int fd)
{
	unsigned int	nbr;
	int				count;

	nbr = (unsigned int)n;
	count = 0;
	if (n < 0)
	{
		ft_print_char('-', fd);
		nbr = -1 * (n);
		count++;
	}
	if (nbr >= 10)
	{
		count += ft_print_nbr(nbr / 10, fd);
		count += ft_print_nbr(nbr % 10, fd);
	}
	else
	{
		ft_print_char(nbr + '0', fd);
		count++;
	}
	return (count);
}
