#include "../includes/libft.h"

#include "../includes/libft.h"

int ft_atoi(const char *string)

{
    int res;
    int i;
    int sign;

    i = 0;
    sign = 1;
    res = 0;


    if (string[i] == '-' || string[i] == '+')
    {
        if (string[i] == '-')
                sign *= -1;
    }
    i++;
    while (string[i] >= '0' && string[i] <= '9')
    {
        res = res * 10 + (string[i] - '0');
        i++;
    }
    return (res * sign);
}