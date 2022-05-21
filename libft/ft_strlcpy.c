#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int count;
	unsigned int i;

	count = 0;
	i = 0;
	while (src[count] != '\0')
		++count;
	if (size < 1)
	{
		return (count);
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (count);
}