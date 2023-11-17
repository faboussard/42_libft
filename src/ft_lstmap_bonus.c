/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:48:20 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/10 10:48:20 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Iterates the list ’lst’ and applies the function
//’f’ on the content of each node.
// Creates a new list resulting of the successive applications of
//the function ’f’.
// The ’del’ function is used to delete the content of a node if needed
//t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *new_node;

	new_list = NULL;
	if (f == NULL || del == NULL)
		return (NULL);

	while (lst != NULL)
	{
		if ((new_node = ft_lstnew(f(lst->content))) == NULL)
		{
//			ft_lstclear(&lst, del);
			ft_lstclear(&new_node, del);
			ft_lstdelone(new_node, del);
//			ft_lstdelone(lst, del);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}

	return (new_list);
}
