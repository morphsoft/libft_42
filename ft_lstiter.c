#include <libft.h>

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == (void *)0 || f == (void *)0)
		return;
	while (lst != (void *)0)
	{
		f(lst->content);
		lst = lst->next;
	}
}
