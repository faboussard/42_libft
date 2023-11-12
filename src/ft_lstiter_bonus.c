/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:01:38 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/12 17:01:38 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by juba on 08/11/23.
//

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f == NULL || lst == NULL)
		return;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}