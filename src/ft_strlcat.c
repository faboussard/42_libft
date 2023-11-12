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
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t c;
	size_t d;

	if (dstsize <= ft_strlen(dst))
	return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
	dst[c] = src[d];
	c++;
	d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}