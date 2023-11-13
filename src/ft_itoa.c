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

#include <stdlib.h>
#include "libft.h"


static int ft_count_digits(int n)
{
    int count = (n <= 0) ? 1 : 0;

    while (n != 0)
    {
        n /= 10;
        count++;
    }

    return count;
}

static int is_negative(int n)
{
    return (n < 0) ? 1 : 0;
}

char *ft_itoa(int n)
{
    int digits = ft_count_digits(n);
    int negative = is_negative(n);

    char *s = (char *)malloc((digits + negative + 1) * sizeof(char));

    if (s == NULL)
        return (NULL);

    if (n == 0)
    {
        s[0] = '0';
        s[1] = '\0';
        return s;
    }

    if (n == -2147483648)
        return ft_strdup("-2147483648");

    if (negative)
    {
        s[0] = '-';
        n = -n;
    }

    s[digits + negative] = '\0';

    while (digits > 0)
    {
        s[digits + negative - 1] = (n % 10) + '0';
        digits--;
        n /= 10;
    }

    return s;
}



