#include <stdlib.h>

char    **ft_split(const char *s, char c)
{
    char **split;
    unsigned int i;
    unsigned int j;
    unsigned int k;

    if (s == (void *)0)
        return (void *)0;
    split = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
    if (split == (void *)0)
        return (void *)0;
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] != '\0')
        {
            k = 0;
            while (s[i + k] != c && s[i + k] != '\0')
                k++;
            split[j++] = ft_substr(s, i, k);
            i += k;
        }
    }
    split[j] = (void *)0;
    return split;
}