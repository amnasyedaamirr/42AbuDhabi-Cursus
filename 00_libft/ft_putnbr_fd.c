/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:42:03 by aaamir            #+#    #+#             */
/*   Updated: 2022/06/15 23:25:11 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	val;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		val = (unsigned int)(nb * -1);
	}
	else
		val = (unsigned int)nb;
	if (val >= 10)
		ft_putnbr_fd(val / 10, fd);
	ft_putchar_fd((char)(val % 10 + 48), fd);
}
