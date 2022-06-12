#include <stdlib.h>

int		char_is_separator(char c, char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c == c[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int		count_words(char *str, char *c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i + 1], c) == 1
				&& char_is_separator(str[i], c) == 0)
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *from, char *c)
{
	int	i;

	i = 0;
	while (char_is_separator(from[i], c) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, char *str, char *c)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (char_is_separator(str[i + j], c) == 0)
				j++;
			split[word] = (char*)malloc(sizeof(char) * (j + 1));
			write_word(split[word], str + i, c);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *s, char *c)
{
	char	**res;
	int		words;

	words = count_words(s, c);
	res = (char**)malloc(sizeof(char*) * (words + 1));
	res[words] = 0;
	write_split(res, s, c);
	return (res);
}