/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:13:57 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/12 20:13:57 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "libft.h"

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;
	char	*new_string;

	s1_len = ft_strlen(s1);
	if (start >= s1_len)
		return (ft_strdup(""));
	new_string = malloc(sizeof(char) * (len + 1));
	if (new_string == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && i < s1_len)
	{
		new_string[j] = s1[i];
		i++;
		j++;
	}
	new_string[j] = '\0';
	return (new_string);
}
