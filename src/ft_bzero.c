//
// Created by fanny on 31/10/23.
//

//sets the first nbytes of the area starting at s to zero
#include "libft.h"

void *ft_bzero(void *s, size_t n)
{
    size_t  i;
    unsigned char   *byte;

    i = 0;
    byte = (unsigned char *) s;
    if (n <= 0)
        return 0;
    if (byte == NULL)
        return 0;
    while (i < n)
    {
        byte[i] = '\0';
        i = i + 1;
    }
    s = (void *)byte;
    return s;
}