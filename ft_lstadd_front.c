typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst == (void *)0 || new == (void *)0)
        return;
    new->next = *lst;
    *lst = new;
}