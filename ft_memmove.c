#include <libft.h>

void *ft_memmove(void *dest, const void *src, unsigned int count)
{
	unsigned int i;
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < count)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = count;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}
