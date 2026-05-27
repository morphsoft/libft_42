typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_node;

    if (lst == (void *)0 || f == (void *)0)
        return (void *)0;
    new_list = (void *)0;
    while (lst != (void *)0)
    {
        new_node = ft_lstnew(f(lst->content));
        if (new_node == (void *)0)
        {
            ft_lstclear(&new_list, del);
            return (void *)0;
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return new_list;
}