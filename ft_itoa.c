
#include <stdlib.h>

char    *ft_itoa(int n)
{
    char *str;
    int temp;
    int len;

    temp = n;
    len = (n <= 0) ? 1 : 0;
    while (temp != 0)
    {
        temp /= 10;
        len++;
    }
    str = (char *)malloc(len + 1);
    if (str == (void *)0)
        return (void *)0;
    str[len] = '\0';
    if (n == 0)
        str[0] = '0';
    else if (n < 0)
        str[0] = '-';
    while (n != 0)
    {
        str[--len] = '0' + (n % 10) * ((n < 0) ? -1 : 1);
        n /= 10;
    }
    return str;
}