/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:16:38 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/13 02:29:21 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s1 = toicoutoicoutoitoi
// set = toi
//Allocates (with malloc(3)) and returns a copy of s1 with the characters
// specified in set removed from the beginning and the end of the string.
size_t	index_end(const char *s1, const char *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		if (ft_strchr(set, s1[i]) == NULL)
			return (i);
		i--;
	}
	return (i);
}

size_t	index_start(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == NULL)
			return (i);
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*s1_copy_trimmed;

	end = index_end(s1, set);
	start = index_start(s1, set);
	len = (end - start) + 1;
	s1_copy_trimmed = ft_substr(s1, start, len);
	return (s1_copy_trimmed);
}
