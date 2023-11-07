
#include <stdlib.h>
#include "../includes/libft.h"
#include "../includes/libft_main.h"

void ft_lstadd_back_main()
{
    t_list *lst;
    t_list *new;

    int content_lst = 55;
    int content_new = 42;
    lst = ft_lstnew(&content_lst);
    new = ft_lstnew(&content_new);

    ft_lstadd_back(&lst, new);
    printf("ft_lstadd_back is %d\n", *(int *)lst->next->content);
    t_list *current = lst;
    while (current)
    {
        t_list *next = current->next;
        free(current->content);
        free(current);
        current = next;
    }
}