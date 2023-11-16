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
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	current = new_list;
	while (lst->next != NULL)
	{
		lst = lst->next;
		current->next = ft_lstnew(f(lst->content));
		if (current->next == NULL)
		{
			ft_lstdelone(current->next, del);
			return (NULL);
		}
		current = current->next;
	}
	return (new_list);
}
