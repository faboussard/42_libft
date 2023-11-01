//
// Created by fanny on 01/11/23.
//

#include "../includes/libft.h"

int ft_toupper(unsigned char c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return (c);
}