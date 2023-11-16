/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/13 01:40:59 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *string)
{
    long res;
    int i;
    int sign;

    i = 0;
    sign = 1;
    res = 0;
    while (string[i] == ' ' || string[i] == '\n' || string[i] == '\t'
           || string[i] == '\v' || string[i] == '\r' || string[i] == '\f')
        i++;
    if (string[i] == '-' || string[i] == '+')
    {
        if (string[i] == '-')
            sign *= -1;
        i++;
    }
    while (string[i] >= '0' && string[i] <= '9')
    {
        if (res != (res * 10 + (string[i] - '0') / 10))
            return (-1 * (sign > 0));
        res = res * 10 + (string[i] - '0');
        i++;
    }
    return (int)(res * sign);
}
