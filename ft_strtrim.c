#include <libft.h>

char	*ft_strtrim(const char *s1, const char *set)
{
	char *trimmed;
	unsigned int start;
	unsigned int end;

	if (s1 == (void *)0 || set == (void *)0)
		return (void *)0;
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != (void *)0)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]) != (void *)0)
		end--;
	trimmed = ft_substr(s1, start, end - start);
	return trimmed;
}
