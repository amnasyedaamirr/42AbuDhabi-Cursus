/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:22:24 by aaamir            #+#    #+#             */
/*   Updated: 2022/06/12 14:31:22 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*pointer;
	size_t	buff_size;

	buff_size = size * count;
	pointer = (void *) malloc(buff_size);
	if (!pointer)
		return (NULL);
	while (buff_size--)
	{
		*(unsigned char *)pointer++ = '\0';
	}
	return (pointer);
}
