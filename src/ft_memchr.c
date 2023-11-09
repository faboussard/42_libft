
#include "libft.h"

// returns a pointer on the first occurence of c
char *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    int found;

    found = 0;
    i = 0;
    unsigned char *byte;
    byte = (unsigned char *)s;
    unsigned char mem_c;
    mem_c = (unsigned char )c;
    while (i < n) {
        if (byte[i] == mem_c) {
            found = 1;
            break;
        }
        i++;
    }
    if (found == 1)
        return (void *)(&byte[i]);
    else
        return (0);
}
