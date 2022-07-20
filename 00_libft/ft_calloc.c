/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:22:24 by aaamir            #+#    #+#             */
/*   Updated: 2022/06/18 19:01:19 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;
	size_t	buff_size;

	buff_size = size * count;
	if (size == SIZE_MAX && count > 1)
		return (NULL);
	pointer = (void *) malloc(buff_size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, buff_size);
	return (pointer);
}
