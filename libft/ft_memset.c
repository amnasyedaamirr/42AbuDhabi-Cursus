#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char* dummy;
    dummy = str;
    
    while(n--)
    {
        *dummy++ = (unsigned char)c;
    }
	return (dummy);
}