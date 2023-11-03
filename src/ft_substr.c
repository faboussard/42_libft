#include "../includes/libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub_s;
    sub_s = malloc(sizeof(char) * len + 1);

    while (start < len)
    {
        sub_s[start] = s[start];
        start++;
    }
    return (sub_s);
}