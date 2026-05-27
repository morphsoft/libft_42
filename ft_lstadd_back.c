typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (lst == (void *)0 || new == (void *)0)
        return;
    if (*lst == (void *)0)
    {
        *lst = new;
        return;
    }
    last = ft_lstlast(*lst);
    last->next = new;
}