#include <libft.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == (void *)0 || new == (void *)0)
		return;
	new->next = *lst;
	*lst = new;
}
