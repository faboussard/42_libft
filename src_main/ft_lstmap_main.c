#include "../src/libft.h"
#include "libft_main.h"

void *myfunc2(void *content)
{
	char *str;
	int i;

	if (content != NULL)
	{
		i = 0;
		str = (char *)content;
		while (str[i] != '\0')
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
	}
	return content;
}

void ft_lstmap_main()
{
	t_list *lst1 = NULL;
	t_list *lst2 = NULL;
	t_list *lst3 = NULL;
	t_list *new_list = NULL;

	char *content_lst1 = ft_strdup("coucou");
	char *content_lst2 = ft_strdup("salut");
	char *content_lst3 = ft_strdup("hola");

	lst1 = ft_lstnew(content_lst1);
	lst2 = ft_lstnew(content_lst2);
	lst3 = ft_lstnew(content_lst3);
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);

	printf("before ft_lstiter is %s\n", (char *) (lst2->content));
	new_list = ft_lstmap(lst1, myfunc2, del);
	printf("after ft_lstiter is %s\n", (char *) new_list->content);
	ft_lstclear(&new_list, del);
}