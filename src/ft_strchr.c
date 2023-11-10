#include "libft.h"

// returns a pointer on the first occurence of c
char *ft_strchr(const char *s, int c)
{
    int i;
    char *result;
    result = (char *) s;

    i = 0;
    while (result[i] != '\0')
    {
        if (result[i] == c)
            return (result);
        i++;
    }
    return (0);
}