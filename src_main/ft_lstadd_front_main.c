
#include <stdlib.h>
#include "../includes/libft.h"
#include "../includes/libft_main.h"

void ft_lstadd_front_main()
{
    t_list *lst;
    t_list *new;

    int content_lst = 55;
    int content_new = 42;
    lst = ft_lstnew(&content_lst);
    new = ft_lstnew(&content_new);

    ft_lstadd_front(&lst, new);

    free(new->next);
    free(new);
}