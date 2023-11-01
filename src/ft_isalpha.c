//
// Created by emip on 01/11/23.
//
#include "../includes/libft.h"

int ft_isalpha(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}