/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:56:29 by aaamir            #+#    #+#             */
/*   Updated: 2022/06/15 23:25:05 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			i_str;
	size_t		buff_size;
	char		*joined_str;

	i = 0;
	i_str = 0;
	buff_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined_str = malloc(sizeof(char) * buff_size);
	if (!s1 || !s2 || !joined_str)
		return (NULL);
	while (s1[i])
		joined_str[i_str++] = s1[i++];
	i = 0;
	while (s2[i])
		joined_str[i_str++] = s2[i++];
	joined_str[i_str] = '\0';
	return (joined_str);
}
