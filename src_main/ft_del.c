//
// Created by juba on 08/11/23.
//

#include <stdlib.h>
#include "../includes/libft.h"
#include "../includes/libft_main.h"

void   del(void *content)
{
    if (content)
    {
        free(content);
    }
}