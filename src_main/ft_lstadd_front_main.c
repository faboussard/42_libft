#include <stdlib.h>
#include "../includes/libft.h"
#include "../includes/libft_main.h"


void ft_lstadd_front_main()
{
    t_list *lst;
    t_list *new;

    int *content_lst = malloc(sizeof(int));
    int *content_new = malloc(sizeof(int));

    *content_lst = 53;
    *content_new = 42;

    lst = ft_lstnew(content_lst);
    new = ft_lstnew(content_new);

    ft_lstadd_front(&lst, new);
    printf("ft_lstadd_front is %d\n", *(int *)lst->content);
    ft_lstdelone(lst, del);
    ft_lstclear(&lst, del);
}
