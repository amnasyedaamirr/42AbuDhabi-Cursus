/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:53:31 by aaamir            #+#    #+#             */
/*   Updated: 2022/06/26 12:05:08 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	size_t			index;
	unsigned char	*us1;
	unsigned char	*us2;

	index = 0;
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((*us1 == *us2) && (index < n - 1) && *us1)
	{
		us1++;
		us2++;
		index++;
	}
	return (*us1 - *us2);
}
