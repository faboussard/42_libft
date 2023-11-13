/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/12 16:26:24 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//** DESCRIPTION:
//** 		Allocates (with malloc(3)) and returns a string representing the
//**	integer received as an argument. Negative numbers must be handled.

#include <malloc.h>
#include "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_power(int i)
{
	int	div;

	div = 1;
	while (i > 0)
	{
		div = div * 10;
		i--;
	}
	return (div);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*s;
	int		div;

	i = ft_count(n);
	s = (char *) malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	div = ft_power(i - 1);
	i = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		s[i++] = '-';
		n = -n;
	}
	while (div > 0)
	{
		s[i] = (n / div % 10 + 48);
		i++;
		div = div / 10;
	}
	s[i] = '\0';
	return (s);
}
