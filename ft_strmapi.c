#include <stdlib.h>

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char *mapped;
    unsigned int i;

    if (s == (void *)0 || f == (void *)0)
        return (void *)0;
    mapped = (char *)malloc(ft_strlen(s) + 1);
    if (mapped == (void *)0)
        return (void *)0;
    i = 0;
    while (s[i] != '\0')
    {
        mapped[i] = f(i, s[i]);
        i++;
    }
    mapped[i] = '\0';
    return mapped;
}