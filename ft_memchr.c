#include <libft.h>

void	*ft_memchr(const void *ptr, int character, size_t num)
{
	const unsigned char	*p;
	unsigned char		c;

	p = ptr;
	c = (unsigned char)character;
	while (num--)
	{
		if (*p == c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
