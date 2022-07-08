/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:41:05 by aaamir            #+#    #+#             */
/*   Updated: 2022/07/08 15:37:17 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_char(char c, int fd)
{
	int	count;

	count = 0;
	write(fd, &c, 1);
	count++;
	return (count);
}
