//
// Created by juba on 07/11/23.
//
#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_lstlast_main()
{
    t_list *lst_1 = NULL;
    t_list *lst_2 = NULL;
    t_list *lst_3 = NULL;
    t_list *last_list = NULL;

    char *content1 = "content1";
    char *content2 = "content2";
    char *content3 = "content3";
    lst_1 = ft_lstnew(content1);
    lst_2 = ft_lstnew(content2);
    lst_3 = ft_lstnew(content3);
    ft_lstadd_front(&lst_2, lst_1);
    ft_lstadd_front(&lst_2, lst_3);

    last_list = ft_lstlast(lst_1);

    printf("ft_lstlast content is %s\n", (char *)last_list->content);
}
