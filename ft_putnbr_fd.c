#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	char *str;

	str = ft_itoa(n);
	if (str == (void *)0)
		return;
	ft_putstr_fd(str, fd);
	free(str);
}
