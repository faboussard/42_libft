//
// Created by juba on 07/11/23.
//

#include <malloc.h>
#include "../includes/libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_list;
    new_list = malloc(sizeof(t_list));
    if (new_list == NULL)
        return (0);
    new_list->content = content;
    new_list->next = NULL;
    return (new_list);
}