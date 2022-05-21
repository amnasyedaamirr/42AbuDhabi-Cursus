#include "libft.h"

int		ft_isascii(int input)
{
	if(input >= 0 && input <= 127)
		return(1);
	return(0);
}