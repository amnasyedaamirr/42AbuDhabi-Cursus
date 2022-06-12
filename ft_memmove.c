/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 00:46:29 by aaamir            #+#    #+#             */
/*   Updated: 2022/05/23 21:36:47 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == src || !len)
		return (dst);
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*((char *)dst + len - 1) = *((char *)src + len - 1);
			len--;
		}
	}
	return (dst);
}
