//
// Created by emip on 01/11/23.
//
#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t d;

    d = 0;
    while (src[d] != '\0' && size)
    {
        dst[size] = src[d];
        size++;
        d++;
    }
    dst[size] = '\0';
    return (size);
}