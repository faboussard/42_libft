/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/11 08:46:22 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns a pointer to the last occurence of c
char *ft_strrchr(const char *s, int c)
{
	char *result;
	size_t i;

	result = (char *)s;
	i = ft_strlen(result);
	while (i > 0 && c != result[i])
		i--;
	if (result[i] == c)
		return (&result[i]);
	return NULL;
}