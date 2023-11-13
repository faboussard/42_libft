/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/11 08:46:22 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//** LIBRARY: <string.h>
//** SYNOPSIS: save a copy of a string (with malloc)
//**
//** DESCRIPTION:
//** 		The strdup() function allocates sufficient memory for a copy of the
//**	string s1, does the copy, and returns a pointer to it.  The pointer may
//		**	subsequently be used as an argument to the function free(3).
//*/
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*copy;

	if (s == NULL)
		return (NULL);
	copy = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s, ft_strlen(s) + 1);
	return (copy);
}
