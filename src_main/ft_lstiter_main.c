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

    lst1 = ft_lstnew("coucou");
    lst2 = ft_lstnew("salut");
    lst3 = ft_lstnew("hola");
    ft_lstadd_back(&lst1, lst2);
    ft_lstadd_back(&lst1, lst3);

    printf("before ft_striteri is %s\n", lst2->content);
    ft_lstiter(lst1, myfunc);
    printf("before ft_striteri is %s\n", lst2->content);
}