/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:22 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/17 19:44:17 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_whitespace(const char *string)
{
	int	i;

	i = 0;
	while (*(string + i) == ' ' || *(string + i) == '\n'
		|| *(string + i) == '\t'
		|| *(string + i) == '\v'
		|| *(string + i) == '\r'
		|| *(string + i) == '\f')
		i++;
	return (string + i);
}

int	ft_sign(const char *string)
{
	int	sign;

	sign = 1;
	if (*string == '-')
		sign *= -1;
	return (sign);
}

int	ft_atoi(const char *string)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	res = 0;
	string = ft_whitespace(string);
	sign = ft_sign(string);
	if (string[i] == '-' || string[i] == '+')
		i++;
	while (string[i] >= '0' && string[i] <= '9')
	{
		res = res * 10 + (string[i] - '0');
		i++;
	}
	return (res * sign);
}
