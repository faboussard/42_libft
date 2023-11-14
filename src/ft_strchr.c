/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/11 08:46:22 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//** 		The strchr() function locates the first
// occurrence of c (converted to a
//**	char) in the string pointed to by s.
// The terminating null character is
//		**	considered to be part of the string;
//		therefore if c is `\0', the func-
//**	tions locate the terminating `\0'.
//*/

char	*ft_strchr(const char *s, int c)
{
    int     i;
	char	*result;

    i = 0;
	result = (char *) s;
	while (result[i] != '\0' && c != result[i])
		result++;
	if (result[i] == c)
		return (result);
	return (NULL);
}
