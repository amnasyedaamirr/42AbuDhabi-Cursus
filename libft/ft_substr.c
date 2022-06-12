#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substring;
    size_t          slen;

	i = 0;
    slen = ft_strlen(s);

	if (!s || !(substring = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (start < slen && s[start + i] && i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}