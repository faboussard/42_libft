/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:08:53 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/13 02:08:53 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return (write(fd, "(null)", ft_strlen("(null)")));
	else
		return (write(fd, s, ft_strlen(s)));
}
