#include <libft.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char *joined;
	unsigned int len1;
	unsigned int len2;

	if (s1 == (void *)0 || s2 == (void *)0)
		return (void *)0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined = (char *)malloc(len1 + len2 + 1);
	if (joined == (void *)0)
		return (void *)0;
	ft_strlcpy(joined, s1, len1 + 1);
	ft_strlcpy(joined + len1, s2, len2 + 1);
	return joined;
}
