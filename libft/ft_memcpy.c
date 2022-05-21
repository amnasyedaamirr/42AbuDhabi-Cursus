#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    char *mysrc = (char *) src;
    char *mydst = (char *) dst;

	if(dst == src || !n)
    {
        return(dst);
    }

    while(n--)
    {
        mydst[n] = mysrc[n];
    }
	return (mydst);
}