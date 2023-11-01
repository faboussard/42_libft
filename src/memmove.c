//
// Created by fanny on 31/10/23.
//

#include "../includes/libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *byte_src;
    unsigned char *byte_dest;
    unsigned char *temp;

    i = 0;
    byte_src = (unsigned char *)src;
    byte_dest = (unsigned char *)dest;
    if (n <= 0)
        return 0;
    if (byte_src == NULL)
        return 0;
    while (i < n)
    {
      temp[i] = byte_src[i];
      byte_dest[i] = temp[i];
      i++;
    }
    byte_dest[i] = '\0';
    return (void *)byte_dest;
}