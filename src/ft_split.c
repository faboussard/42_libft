///* ************************************************************************** */
///*                                                                            */
///*                                                        :::      ::::::::   */
///*   ft_split.c                                         :+:      :+:    :+:   */
///*                                                    +:+ +:+         +:+     */
///*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
///*                                                +#+#+#+#+#+   +#+           */
///*   Created: 2023/11/12 21:04:58 by faboussa          #+#    #+#             */
///*   Updated: 2023/11/12 21:04:58 by faboussa         ###   ########.fr       */
///*                                                                            */
///* ************************************************************************** */
//
//#include <stdlib.h>
//#include <stdio.h>
//#include "libft.h"
//
////** DESCRIPTION:
////** 		Allocates (with malloc(3)) and
//// returns an array of strings obtained by
////**	splitting ’s’ using the character ’c’
//// as a delimiter. The array must be
////**	ended by a NULL pointer.
////*/
//
//size_t	index_start_word(const char *s1, const char *set)
//{
//    size_t	i;
//
//    i = 0;
//    while (s1[i] != '\0')
//    {
//        if (ft_strchr(set, s1[i]))
//            return (i);
//        i++;
//    }
//    return (i);
//}
//
//static size_t	index_end_word(const char *s1, const char *set)
//{
//    size_t	i;
//
//    i = ft_strlen(s1) - 1;
//    while (i > 0)
//    {
//        if (ft_strchr(set, s1[i]) == NULL)
//            return (i);
//        i--;
//    }
//    return (i);
//}
//
//static int count_letters(const char *str, char c)
//{
//    int count;
//    int is_word;
//
//    count = 0;
//    is_word = 0;
//
//    while (*str != '\0')
//    {
//        if (*str!= c)
//        {
//            if (is_word == 0)
//            {
//                is_word = 1;
//                count++;
//            }
//        }
//        else
//            is_word = 0;
//        str++;
//    }
//    return (count);
//}
//
//char **ft_split(char const *s, char c)
//{
//    size_t	start;
//    size_t	end;
//    size_t	len;
//    printf("sub str is %zu\n", len);
//    size_t i;
//    char    *s_copy;
//    char    **split;
//
//    i = 0;
//    end = index_end_word(s, &c);
//    printf("sub str is %zu\n", end);
//    start = index_start_word(s, &c);
//    printf("sub str is %zu\n", start);
//    len = (end - start) + 1;
//    printf("sub str is %zu\n", len);
//    split = malloc(sizeof(char *) * (count_letters(s, c) + 1));
//    if (split == NULL)
//        return (NULL);
//
//    s_copy = (char *)s;
//    while (s_copy[i] != '\0')
//    {
//        s_copy[i] = (*ft_substr(s, start, len) - 1);
//        printf("sub str is %s\n", s_copy[i]);
//        i++;
//    }
//
//    while (i < (count_letters(s, c)))
//    {
//        split[i] = ft_strdup(&s_copy[i]);
//        i++;
//    }
//    split[i] = '\0';
//    return split;
//}
//
//
