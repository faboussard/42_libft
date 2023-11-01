//
// Created by emip on 01/11/23.
//
#include "../includes/libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while (i < size && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (i);
}