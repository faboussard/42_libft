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
    int count;
    int is_word;

    count = 0;
    is_word = 0;

    while (*str != '\0')
    {
        if (*str!= c)
        {
            if (is_word == 0)
            {
                is_word = 1;
                count++;
            }
        }
        else
            is_word = 0;
        str++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    size_t i = 0;
    size_t j = 0;
    int start = -1;
    char **split;


    }
    split[j] = NULL;
    return split;
}


