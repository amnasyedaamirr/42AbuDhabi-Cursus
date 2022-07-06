/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:38:00 by aaamir            #+#    #+#             */
/*   Updated: 2022/07/06 20:58:57 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int		ft_print_nbr(int nb, int fd);
int		ft_print_char(char c, int fd);
int		ft_print_str(char *s, int fd);
int		ft_putvar_addr(unsigned long nbr, char *base_digits);
int		ft_putnbr_base(unsigned int nbr, unsigned int base, char *base_digits);
size_t	ft_strlen(const char *str);

#endif