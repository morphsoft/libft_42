#include <libft.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, unsigned int num)
{
	const unsigned char *p1;
	const unsigned char *p2;

	p1 = (const unsigned char *)ptr1;
	p2 = (const unsigned char *)ptr2;
	for (unsigned int i = 0; i < num; i++)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
	}
	return 0;
}
