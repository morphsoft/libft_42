void    ft_putstr_fd(char *s, int fd)
{
    unsigned int i;

    if (s == (void *)0)
        return;
    i = 0;
    while (s[i] != '\0')
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}