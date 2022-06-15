/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 00:02:41 by aaamir            #+#    #+#             */
/*   Updated: 2022/06/15 23:25:27 by aaamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int input)
{
	if ((input >= 'A' && input <= 'Z')
		|| (input >= 'a' && input <= 'z'))
	{
		return (1);
	}
	return (0);
}
