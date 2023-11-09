//
// Created by emip on 01/11/23.
//
#include "libft.h"
//returns the length of src, The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  return_value;

    i = 0;
    while (i < size && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return_value = ft_strlen(src);
    dest[i] = '\0';
    return (return_value);
}