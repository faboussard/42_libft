#include "libft.h"

// returns a pointer to the last occurence of c
char *ft_strrchr(const char *s, int c)
{
    size_t i;
    char *result;
    result = (char *) s;

    i = ft_strlen(s);
    while (i > 0)
    {
        if (result[i] == c)
            return (result);
        i--;
    }
    return (0);
}