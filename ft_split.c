#include <libft.h>

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;

	if (s == NULL)
		return NULL;
	split = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return NULL;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			k = 0;
			while (s[i + k] != c && s[i + k] != '\0')
				k++;
			split[j++] = ft_substr(s, i, k);
			i += k;
		}
	}
	split[j] = NULL;
	return split;
}

int	ft_count_words(const char *s, char splitter)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == splitter)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != splitter && s[i] != '\0')
				i++;
		}
	}
	return count;
}
