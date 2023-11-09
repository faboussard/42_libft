#include "../src/libft.h"
#include "libft_main.h"

void myfunc(void *content)
{
    char *str;
    int i;

    if (content != NULL)
    {
        i = 0;
        str = content;
        while (str[i] != '\0')
        {
            ft_toupper(str[i]);
            i++;
        }
    }
}

void ft_lstiter_main()
{
    t_list *lst1 = NULL;
    t_list *lst2 = NULL;
    t_list *lst3 = NULL;

    char *content_lst1 = ft_strdup("coucou");
    char *content_lst2 = ft_strdup("salut");
    char *content_lst3 = ft_strdup("hola");

    lst1 = ft_lstnew(content_lst1);
    lst2 = ft_lstnew(content_lst2);
    lst3 = ft_lstnew(content_lst3);
    ft_lstadd_back(&lst1, lst2);
    ft_lstadd_back(&lst1, lst3);

    printf("before ft_lstiter is %s\n", (char*) (lst2->content));
    ft_lstiter(lst2, myfunc);
    printf("after ft_lstiter is %s\n", (char*)lst2->content);
    ft_lstclear(&lst1, del);
}