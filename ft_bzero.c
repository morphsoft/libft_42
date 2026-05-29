#include <libft.h>

void ft_bzero(void *s, unsigned int n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n >= 0)
		ptr[n--] = '\0';
}
