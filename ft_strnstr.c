char *ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
    unsigned int i;
    unsigned int j;

    if (needle[0] == '\0')
        return ((char *)haystack);
    i = 0;
    while (haystack[i] != '\0' && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && (i + j) < len)
        {
            if (needle[j + 1] == '\0')
                return ((char *)(haystack + i));
            j++;
        }
        i++;
    }
    return ((void *)0);
}