//
// Created by emip on 01/11/23.
//

#include "../includes/libft.h"
#include <stdlib.h>

char *ft_strdup(char *string)
{
    char *new_string;
    new_string = malloc(sizeof(char) * *string);
    if (new_string == NULL)
        return 0;
    new_string = string;
    return (new_string);
}