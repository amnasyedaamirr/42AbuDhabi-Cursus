#include "libft.h"

int		ft_isprint(int input)
{
	if(input >= 33 && input <= 126)
		return(1);
	return(0);
}