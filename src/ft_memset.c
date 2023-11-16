/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/13 01:33:36 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//DESCRIPTION
//The memset() function fills the first n bytes of the memory area
//pointed to by s with the constant byte c.
//RETURN VALUE
//	The memset() function returns a pointer to the memory area s.
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*byte;

	i = 0;
	byte = (unsigned char *)s;
	while (i < n)
	{
		byte[i] = c;
		i++;
	}
	return ((void *)(byte));
}
