#include "libft.h"

int		ft_isdigit(int arg)
{
	if(arg >= '0' && arg <= '9')
		return(1);
	return(0);
}