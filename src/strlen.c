//
// Created by emip on 01/11/23.
//

#include "../includes/libft.h"

int ft_strlen(char *string)
{
    int i;
    i = 0;
    while (string[i])
        i++;
    return i;
}