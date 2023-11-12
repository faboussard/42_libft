/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/11 08:46:22 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//La fonction calloc() alloue la mémoire nécessaire pour un tableau de nmemb éléments de size octets, et renvoie un pointeur vers la mémoire allouée.
void *ft_calloc(size_t nmemb, size_t size)
{
	size_t total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	total_size = nmemb * size;
	if (total_size > 2147483647)
	{
		return ("error");
	}
	ptr = malloc(total_size);
	if (ptr != NULL)
		memset(ptr, 0, total_size);
	return (ptr);
}