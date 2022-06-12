#include "libft.h"

char    *strdup(const char *s1)
{
    char    *s2;
    int     i;
    int     s1_size;
    int     buff_size;

    i = 0;
    s1_size = ft_strlen(s1) + 1;
    buff_size = (sizeof(char) * s1_size);

    if (!(s2 = (char *)malloc(buff_size)))
        return (NULL);
    while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}