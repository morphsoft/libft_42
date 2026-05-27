typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *current;
    t_list *next;

    if (lst == (void *)0 || del == (void *)0)
        return;
    current = *lst;
    while (current != (void *)0)
    {
        next = current->next;
        del(current->content);
        free(current);
        current = next;
    }
    *lst = (void *)0;
}