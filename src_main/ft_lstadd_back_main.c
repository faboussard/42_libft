
#include <stdlib.h>
#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_lstadd_back_main()
{
	t_list *current;
	t_list *new;


	int *content_current = malloc(sizeof (int));
	int *content_new = malloc(sizeof(int));

	*content_current = 42;
	*content_new = 0;

    current = ft_lstnew(content_current);
	new = ft_lstnew(content_new);

	ft_lstadd_back(&current, new);
	printf("ft_lstadd_back is %d\n", *(int*)current->next->content);
	ft_lstdelone(current, del);
	ft_lstdelone(new, del);

    t_list * l =  NULL; t_list * l2 =  NULL;
    
}