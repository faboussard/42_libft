//
// Created by juba on 07/11/23.
//

#include <malloc.h>
#include "../includes/libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_element;

    new_element = malloc(sizeof(t_list));
    if (!new_element)
        return (0);
    new_element->content = content;
    new_element->next = NULL;
    return (new_element);
}