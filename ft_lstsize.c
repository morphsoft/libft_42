typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst != (void *)0)
    {
        count++;
        lst = lst->next;
    }
    return count;
}