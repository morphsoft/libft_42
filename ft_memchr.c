void *ft_memchr(const void *ptr, int character, unsigned int num)
{
    const unsigned char *p = (const unsigned char *)ptr;
    unsigned char c = (unsigned char)character;

    for (unsigned int i = 0; i < num; i++)
    {
        if (p[i] == c)
            return (void *)(p + i);
    }
    return (void *)0;
}