char    *ft_strrchr(const char *str, int character)
{
    const char *last_occurrence;

    last_occurrence = (void *)0;
    while (*str != '\0')
    {
        if (*str == (char)character)
            last_occurrence = str;
        str++;
    }
    if (character == '\0')
        return ((char *)str);
    return ((char *)last_occurrence);
}