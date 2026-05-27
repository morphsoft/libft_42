#include <stdlib.h>

char* ft_strdup(const char *s)
{
    unsigned int len;
    char *dup;

    len = ft_strlen(s);
    dup = (char *)malloc(len + 1);
    if (dup == (void *)0)
        return dup;
    ft_strlcpy(dup, s, len + 1);
    return dup;
}