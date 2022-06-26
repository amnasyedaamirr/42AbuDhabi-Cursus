/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 00:53:05 by aaamir            #+#    #+#             */
/*   Updated: 2022/06/26 11:56:00 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	k;

	k = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size == 0)
		return (len_src);
	if (size < len_dest)
		len_src += size;
	else
		len_src += len_dest;
	while (src[k] != '\0' && (len_dest + k) < (size - 1))
	{
		dest[len_dest + k] = src[k];
		k++;
	}
	if (k > 0)
	{
		dest[len_dest + k] = '\0';
	}
	return (len_src);
}
