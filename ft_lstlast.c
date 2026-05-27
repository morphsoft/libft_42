typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

t_list *ft_lstlast(t_list *lst)
{
    if (lst == (void *)0)
        return (void *)0;
    while (lst->next != (void *)0)
        lst = lst->next;
    return lst;
}