#include <libft.h>

void	*ft_memset(void *dest, int c, unsigned int count)
{
	unsigned int i;
	unsigned char *ptr;

	ptr = (unsigned char *)dest;
	i = 0;
	while (i < count)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
