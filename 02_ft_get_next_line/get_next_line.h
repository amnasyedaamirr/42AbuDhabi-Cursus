/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:59:34 by aaamir            #+#    #+#             */
/*   Updated: 2022/09/21 20:21:16 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*ft_read_from_fd(int fd, char *fd_string);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
int 	ft_strlen(char *s);
char	*ft_get_line(char *fd_string);
char	*ft_remove_line(char *fd_string);

#endif
