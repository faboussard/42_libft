//
// Created by fanny on 01/11/23.
//

#include "libft.h"

int ft_tolower(unsigned char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}