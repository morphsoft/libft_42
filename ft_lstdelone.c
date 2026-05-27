typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
#include <stdlib.h>

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst == (void *)0 || del == (void *)0)
        return;
    del(lst->content);
    free(lst);
}