/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/11 08:46:22 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
//	t_list	*last;
//
//    temp = lst;
//	if (temp != NULL)
//	{
//		while (*temp != NULL)
//		{
//                last = ft_lstlast(*lst);
//                last->next = new;
//		}
//        *lst = new;
//	}
//	new->next = NULL;
    if (*lst)
        (*lst)->next = new;
    else
        *lst = new;
}
