//
// Created by juba on 07/11/23.
//
#include "../includes/libft.h"
#include <stdlib.h>

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (del == NULL)
        return;
    if (lst != NULL)
    {
        del(lst->content);
        free(lst);
    }
}