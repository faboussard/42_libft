//
// Created by juba on 07/11/23.
//
#include "../includes/libft.h"

t_list *ft_lstlast(t_list *lst)
{
    while ((lst->next != NULL))
    {
        lst = lst->next;
    }
    return (lst);
}