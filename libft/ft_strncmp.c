/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:53:31 by aaamir            #+#    #+#             */
/*   Updated: 2022/06/15 23:24:47 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	index;

	index = 0;
	if (n == 0)
		return (0);
	while ((*s1 == *s2) && (index < n - 1) && *s1)
	{
		s1++;
		s2++;
		index++;
	}
	return (*s1 - *s2);
}
