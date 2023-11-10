//
// Created by emip on 01/11/23.
//
#include "libft.h"

/*
** DESCRIPTION:
** 	strlcat() take the full size of the buffer (not
**	just the length) and guarantee to NUL-terminate the result
 *  as long as size is larger than 0
 * as long as there is at least one byte free in dst.
 *
 * Note that you should include a byte for the NUL in size.
 * for strlcat() both src and dst must be NUL-terminated.
 * returns : the initial length of dst plus the length of src (to make truncation detection simple.)
*/
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (dest == 0 || src == 0)
        return (0);
    if (size != 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dest[size] = src[i];
            size++;
            i++;
        }
        dest[size] = '\0';
    }
    return (size);
}