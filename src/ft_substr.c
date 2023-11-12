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

char *ft_substr(char const *s1, unsigned int start, size_t len)
{
	size_t i;
	char *new_string;

	new_string = malloc((sizeof(char) * len) + 1);
	if (new_string == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		new_string[i] = s1[start];
		i++;
		start++;
	}
	new_string[i] = '\0';
	return (new_string);
}
