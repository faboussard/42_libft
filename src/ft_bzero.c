//
// Created by fanny on 31/10/23.
//
#include "../includes/libft.h"

void *ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *byte;
    i = 0;
    byte = (unsigned char *) s;
    while (i < n)
    {
        byte[i] = '\0';
        i = i + 1;
    }
    s = (void *)byte;
    return s;
}