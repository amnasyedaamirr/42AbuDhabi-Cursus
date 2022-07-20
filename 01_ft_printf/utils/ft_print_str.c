/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:42:23 by aaamir            #+#    #+#             */
/*   Updated: 2022/07/06 21:04:28 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_str(char *s, int fd)
{
	int	count;

	count = 0;
	if (s != NULL)
	{
		while (s[count])
		{
			ft_print_char(s[count], fd);
			count++;
		}	
	}
	else
	{
		ft_print_str("(null)", 1);
		count = 6;
	}
	return (count);
}
