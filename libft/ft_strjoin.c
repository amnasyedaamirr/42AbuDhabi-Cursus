#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			i_str;
    size_t      s1_size;
    size_t      s2_size;
    size_t      buff_size;
	char		*joined_str;

	i = 0;
	i_str = 0;
    s1_size = ft_strlen(s1);
    s2_size = ft_strlen(s2);
    buff_size = s1_size + s2_size + 1;

	if (!s1 || !s2 || !(joined_str = malloc(sizeof(char) * buff_size)))
		return (NULL);
	while (s1[i])
		joined_str[i_str++] = s1[i++];
	i = 0;
	while (s2[i])
		joined_str[i_str++] = s2[i++];
	joined_str[i_str] = '\0';
	return (joined_str);
}