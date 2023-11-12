/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/11 08:46:22 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *byte;

	i = 0;
	byte = (unsigned char *) s;
	if (n <= 0)
		return 0;
	if (byte == NULL)
		return 0;
	while (i < n)
	{
		byte[i] = '\0';
		i = i + 1;
	}
	s = (void *) byte;
	return s;
}