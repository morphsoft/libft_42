#include <libft.h>

void ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int i;
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
