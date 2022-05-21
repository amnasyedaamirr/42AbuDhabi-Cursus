#include "libft.h"

int		ft_isalnum(int input)
{
	if((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z') || (input >= '0' && input <= '9'))
		return(1);
	return(0);
}