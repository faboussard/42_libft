//
// Created by emip on 01/11/23.
//
#include "../includes/libft.h"

size_t ft_strlcat(char *str1, char *str2, size_t size)
{
    size_t dest_len;
    size_t i;

    i = 0;
    dest_len = ft_strlen(str2);
    while (i < size && str1[i])
    {
        str2[dest_len + i] = str1[i];
        i++;
    }
    str2[dest_len + i] = '\0';
    i = dest_len + i;
    return (i);
}