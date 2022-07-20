/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:15:02 by aaamir            #+#    #+#             */
/*   Updated: 2022/06/17 21:35:31 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char) *s == (unsigned char) c)
		{
			return ((char *) s);
		}
		s++;
	}
	if (c == 0)
	{
		return ((char *) s);
	}
	return (0);
}
