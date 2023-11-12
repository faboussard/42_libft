/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/11 08:46:22 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memcpy() function copies n bytes from memory area src to
//memory area dest.  The memory areas must not overlap.  Use
//memmove(3) if the memory areas do overlap.

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *byte_src;
	unsigned char *byte_dest;

	if (dest == NULL || src == NULL)
		return 0;
	i = 0;
	byte_src = (unsigned char *) src;
	byte_dest = (unsigned char *) dest;
	while (i < n)
	{
		byte_dest[i] = byte_src[i];
		i++;
	}
	return (void *)byte_dest;
}