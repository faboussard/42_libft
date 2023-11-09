
#include <stdlib.h>
#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_lstnew_main()
{
    char *content1 = "salut";
    int content2 = 42;
    t_list *mylist1;
    t_list *mylist2;
    if ((mylist1 = ft_lstnew(content1)) == 0)
        printf("allocation for mylist1 failed");
    if ((mylist2 = ft_lstnew(&content2)) == 0)
        printf("allocation for mylist2 failed");
    printf("content1 in struct listnew1 is %s\n", (char*)mylist1->content);
    printf("content2 in struct listnew1 is %d\n", *((int*)mylist2->content));
    free(mylist1->content);
    free(mylist2->content);
    free(mylist1);
    free(mylist2);
}