#include <libft.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == (void *)0 || del == (void *)0)
		return;
	del(lst->content);
	free(lst);
}
