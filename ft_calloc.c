#include <stdlib.h>

void    *ft_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int total_size = nmemb * size;
    void    *ptr = malloc(total_size);
    if (ptr == (void *)0)
        return ptr;
    ft_bzero(ptr, total_size);
    return ptr;
}