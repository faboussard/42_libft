//
// Created by juba on 08/11/23.
//

#include "../includes/libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!f)
        return;
    while (lst->next)
    {
       f(lst->content);
       lst = lst->next;
    }
}