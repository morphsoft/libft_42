void ft_bzero(void *s, unsigned int n)
{
    unsigned int i;
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = '\0';
        i++;
    }
}