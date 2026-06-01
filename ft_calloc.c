#include <libft.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	total_size;
	void			*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, total_size);
	return (ptr);
}
