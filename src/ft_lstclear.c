//
// Created by juba on 07/11/23.
//
#include "../includes/libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if (!*lst)
        return;
    while (*lst)
    {
        temp = *lst;
        *lst = (*lst)->next;
        (*del)(temp->content);
        free(temp);
    }
}
