#include "libft.h"

void    *calloc(size_t count, size_t size)
{
    void	*pointer;
    size_t  buff_size;

    buff_size = size * count;

	if (!(pointer = (void *)malloc(buff_size)))
		return (NULL);
        
	while (buff_size--)
	{
		*(unsigned char *)pointer++ = '\0';
	}
	return (pointer);
}