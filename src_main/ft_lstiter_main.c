#include "../includes/libft.h"
#include "../includes/libft_main.h"
#include <stdlib.h>


void myfunc(void *content)
{
    if (content)
    {
        content += 32;
    }
}

void ft_lstiter_main()
{
    t_list *lst1 = NULL;
    t_list *lst2 = NULL;
    t_list *lst3 = NULL;

    char *content_lst1 = malloc(sizeof (char));
    char *content_lst2 = malloc(sizeof(char));
    char *content_lst3 = malloc(sizeof(char));

    content_lst1 = "coucou";
    content_lst2 = "salut";
    content_lst3 = "hola";

    lst1 = ft_lstnew(content_lst1);
    lst2 = ft_lstnew(content_lst2);
    lst3 = ft_lstnew(content_lst3);
    ft_lstadd_back(&lst1, lst2);
    ft_lstadd_back(&lst1, lst3);

    printf("before ft_lstiter is %s\n", (char*) (lst2->content));
    ft_lstiter(lst1, myfunc);
    printf("before ft_lstiter is %s\n", (char*)lst2->content);
    ft_lstdelone(lst1, del);
    ft_lstclear(&lst1, del);
}