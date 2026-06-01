#include <libft.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		i;

	if (s == (void *)0)
		return (void *)0;
	if (start >= ft_strlen(s))
		return ft_strdup("");
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = (char *)malloc(len + 1);
	if (substr == (void *)0)
		return (void *)0;
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return substr;
}
