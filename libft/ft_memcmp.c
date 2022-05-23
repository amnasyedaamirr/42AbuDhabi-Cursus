/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:30:36 by aaamir            #+#    #+#             */
/*   Updated: 2022/05/23 21:34:34 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i)
			== *((unsigned char *)s2 + i))
		{
			i++;
		}
		else
		{
			return ((*((unsigned char *)s1 + i))
				- *((unsigned char *)s2 + i));
		}
	}
	return (0);
}
