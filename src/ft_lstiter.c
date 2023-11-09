//
// Created by juba on 08/11/23.
//

#include "../includes/libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (f == NULL)
        return;
    while (lst->next != NULL)
    {
       f(lst->content);
       lst->content = lst->next->content;
    }
}