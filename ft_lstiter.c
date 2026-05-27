typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
#include <stdlib.h>

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