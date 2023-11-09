//
// Created by juba on 08/11/23.
//

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (f == NULL || lst == NULL)
        return;
    while (lst->next != NULL)
    {
       f(lst->content);
       lst = lst->next;
    }
}