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
//** 		Allocates (with malloc(3)) and
// returns an array of strings obtained by
//**	splitting ’s’ using the character ’c’
// as a delimiter. The array must be
//**	ended by a NULL pointer.
//*/

static int count_words(const char *str, char c)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str != c)
        {
            if (!in_word)
            {
                in_word = 1;
                count++;
            }
        }
        else
        {
            in_word = 0;
        }
        str++;
    }

    return count;
}

char **ft_split(char const *s, char c)
{
    size_t i = 0;
    size_t j = 0;
    int start = -1;
    char **split;

    split = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
    if (s == NULL || split == NULL)
        return NULL;

    while (s[i])
    {
        if (s[i] != c && start == -1)
        {
            start = i;
        }
        else if ((s[i] == c || s[i + 1] == '\0') && start != -1)
        {
            size_t len;
            if (s[i] == c)
            {
                len = i - start;
            }
            else
            {
                len = i - start + 1;
            }
            split[j++] = ft_substr(s, start, len);
            start = -1;
        }
        i++;
    }
    split[j] = NULL;
    return split;
}


