//
// Created by emip on 01/11/23.
//
#include "libft.h"

int ft_isalnum(unsigned char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return (1);
    else
        return (0);
}