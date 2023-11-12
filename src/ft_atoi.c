/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/11 08:46:22 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *string)
{
	int res;
	int i;
	int sign;

	i = 0;
	sign = 1;
	res = 0;
	while (*string == ' ' || *string == '\n' || *string == '\t' || *string == '\v' ||
	       *string == '\r' || *string == '\f')
		string++;
	if (*string == '-' || *string == '+')
	{
		if (*string == '-')
			sign *= -1;
		string++;
	}
	while (*string >= '0' && *string <= '9')
	{
		res = res * 10 + (string[i] - '0');
		string++;
	}
	return (res * sign);
}