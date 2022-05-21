#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_dest;
	unsigned int len_src;
	unsigned int k;

	len_dest = 0;
	len_src = 0;
	k = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size == 0)
		return (len_src);
	if (size < len_dest)
		len_src += size;
	else
		len_src += len_dest;
	while (src[k] != '\0' && (len_dest + k) < (size - 1))
	{
		dest[len_dest + k] = src[k];
		k++;
	}
	dest[len_dest + k] = '\0';
	return (len_src);
}