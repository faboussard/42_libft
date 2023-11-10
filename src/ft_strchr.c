#include "libft.h"

// returns a pointer on the first occurence of c
char *ft_strchr(const char *s, int c)
{
    int i;
    char *result;
    result = (char *) s;
    if (c == '\0')
        return result;
    i = 0;
    while (result[i] != '\0')
    {
        if (result[i] == c)
        {
            return (&result[i]);
        }
        i++;
    }
    return (0);
}