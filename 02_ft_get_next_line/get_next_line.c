/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:00:20 by aaamir            #+#    #+#             */
/*   Updated: 2022/09/21 20:21:03 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_from_fd(int fd, char *fd_string)
{
	char	*file_string;
	int		bytes_read;

	file_string = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!file_string)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(fd_string, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, file_string, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(file_string);
			return (NULL);
		}
		file_string[bytes_read] = '\0';
		fd_string = ft_strjoin(fd_string, file_string);
	}
	free(file_string);
	return (fd_string);
}

char	*get_next_line(int fd)
{
	static char	*fd_string;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	fd_string = ft_read_from_fd(fd, fd_string);
	if (!fd_string)
		return (NULL);
	line = ft_get_line(fd_string);
	fd_string = ft_remove_line(fd_string);
	return (line);
}
