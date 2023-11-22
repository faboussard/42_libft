/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/22 12:17:28 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new_string;
	size_t		total_length;

	total_length = ft_strlen(s1) + ft_strlen(s2);
	new_string = malloc(sizeof(char) * total_length + 1);
	if (new_string == NULL)
		return (0);
	ft_strlcpy(new_string, s1, total_length);
	ft_strlcat(new_string, s2, total_length);
	return (new_string);
}
