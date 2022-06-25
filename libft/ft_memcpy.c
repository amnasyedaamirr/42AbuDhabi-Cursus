/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 00:14:33 by aaamir            #+#    #+#             */
/*   Updated: 2022/06/23 20:59:14 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*mysrc;
	char	*mydst;

	mysrc = (char *) src;
	mydst = (char *) dst;
	if (dst == src || !n)
	{
		return (dst);
	}
	while (n--)
	{
		mydst[n] = mysrc[n];
	}
	return (mydst);
}
