//
// Created by emip on 01/11/23.
//
#include "libft.h"
/*
** DESCRIPTION:
** 	 strlcpy() take the full size of the buffer (not
**	just the length) and guarantee to NUL-terminate the result
 * as long as size is larger than 0
 * you should include a byte for the NUL in size.
** 		The strlcpy() function copies up to size - 1 characters from the NUL-
**	terminated string src to dst, NUL-terminating the result.
 * returns : length of src.
*/
size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  return_value;

    i = 0;
    if (dest == 0 || src == 0)
        return (0);
    if (size != 0)
    {
        while (i < (size - 1) && src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return_value = ft_strlen(src);
    return (return_value);
}