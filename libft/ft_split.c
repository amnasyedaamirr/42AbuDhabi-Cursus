#include "libft.h"

size_t		count_words(char const *s, char c)
{
	size_t		count;

	count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (count);
}

char		**free_machine(char **s, size_t i)
{
	while (s[i] != NULL && i >= 0)
	{
		free(s[i]);
		s[i] = NULL;
		i--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		len;
	size_t		word_count;
	char		**words;

    words = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !words)
		return (NULL);
	word_count = count_words(s, c);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while (*(s + len) && *(s + len) != c)
				len++;
			if (i < word_count && !(words[i++] = ft_substr(s, 0, len)))
				return (free_machine(words, i));
			s += len;
		}
	}
	words[i] = 0;
	return (words);
}