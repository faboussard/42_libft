
#include <stdlib.h>
#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_lstadd_back_main()
{
	t_list *lst;
	t_list *new;

	int *content_lst = malloc(sizeof (int));
	int *content_new = malloc(sizeof(int));

	*content_lst = 42;
	*content_new = 55;

	lst = ft_lstnew(content_lst);
	new = ft_lstnew(content_new);

	ft_lstadd_back(&lst, new);
	printf("ft_lstadd_back is %d\n", *(int*)lst->next->content);
	ft_lstdelone(lst, del);
	ft_lstdelone(new, del);
}