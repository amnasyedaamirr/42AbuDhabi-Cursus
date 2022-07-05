/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:42:23 by aaamir            #+#    #+#             */
/*   Updated: 2022/07/03 11:35:49 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (s != NULL)
	{
		while (s[count])
		{
			ft_putchar_fd(s[count], fd);
			count++;
		}	
	}
	return (count);
}
