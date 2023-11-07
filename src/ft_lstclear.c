//
// Created by juba on 07/11/23.
//
#include "../includes/libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (lst)
    {
        if (*lst)
        {
            while (lst)
            {
                free(lst);
                del(lst->content);
            }
            *lst = NULL;
        }
    }
}