/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:28:54 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/12 10:28:54 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns a pointer on the first occurence of c
char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*byte;

	i = 0;
	byte = (char *) s;
	while (i < n)
	{
		if (byte[i] == c)
		{
			return (&byte[i]);
		}
		i++;
	}
	return (0);
}
