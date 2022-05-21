#include "libft.h"

int		ft_isalpha(int input)
{
	if((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z'))
		return(1);
	return(0);
}