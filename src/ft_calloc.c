#include "../includes/libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total_size;
    void *ptr;

    if (nmemb == 0 || size == 0)
        return (0);
    total_size = nmemb * size;
    if (total_size > 2147483647) {
        return ("error");
    }
    ptr = malloc(total_size);
    if (ptr != NULL)
    {
       memset(ptr, 0, total_size);
    }
    return (ptr);
}