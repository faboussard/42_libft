/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:04:58 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/12 21:04:58 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

//** DESCRIPTION:
//** 		Allocates (with malloc(3)) and returns an array of strings obtained by
//**	splitting ’s’ using the character ’c’ as a delimiter. The array must be
//**	ended by a NULL pointer.
//*/

static int	count_words(const char *str, char c)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = ft_substr(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}