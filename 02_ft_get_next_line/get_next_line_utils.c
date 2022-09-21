/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:20:43 by aaamir            #+#    #+#             */
/*   Updated: 2022/09/21 20:20:48 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int			i;
	int			i_str;
	char		*joined_str;

	i = 0;
	i_str = 0;
	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	joined_str = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined_str)
		return (NULL);
	while (s1[i])
		joined_str[i_str++] = s1[i++];
	i = 0;
	while (s2[i])
		joined_str[i_str++] = s2[i++];
	joined_str[i_str] = '\0';
	free(s1);
	return (joined_str);
}

char	*ft_get_line(char *fd_string)
{
	int		i;
	char	*str;

	i = 0;
	if (!fd_string[i])
		return (NULL);
	while (fd_string[i] && fd_string[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (fd_string[i] && fd_string[i] != '\n')
	{
		str[i] = fd_string[i];
		i++;
	}
	if (fd_string[i] == '\n')
	{
		str[i] = fd_string[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_remove_line(char *fd_string)
{
	int		index;
	int		j;
	char	*str;

	index = 0;
	while (fd_string[index] && fd_string[index] != '\n')
		index++;
	if (!fd_string[index])
	{
		free(fd_string);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(fd_string) - index + 1));
	if (!str)
		return (NULL);
	index++;
	j = 0;
	while (fd_string[index])
		str[j++] = fd_string[index++];
	str[j] = '\0';
	free(fd_string);
	return (str);
}
