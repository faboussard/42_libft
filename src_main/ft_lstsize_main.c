//
// Created by juba on 07/11/23.
//
#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_lstsize_main()
{
    t_list *mylist = NULL;
    int i;
    i = 0;
    while (i < 3)
    {
        ft_lstadd_front(&mylist, ft_lstnew("salut"));
        i++;
    }
    printf("there is %d nodes in the list\n", i);
    printf("ft_lstsize is %d\n", ft_lstsize(mylist));
}
