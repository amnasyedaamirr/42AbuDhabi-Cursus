/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:38:00 by aaamir            #+#    #+#             */
/*   Updated: 2022/07/08 15:37:58 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_print_nbr(int nb, int fd);
int		ft_print_char(char c, int fd);
int		ft_print_str(char *s, int fd);
int		ft_putvar_addr(unsigned long nbr, char *base_digits);
int		ft_putnbr_base(unsigned int nbr, unsigned int base, char *base_digits);
int		ft_printf(const char *str, ...);
int		ft_print_formats(const char *format, va_list *va);
size_t	ft_strlen(const char *str);

#endif