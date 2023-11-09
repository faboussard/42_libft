#include "libft.h"

// returns a pointer on the first occurence of c
char *ft_strchr(const char *s, int c)
{
    int i;
    char *result;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            result = ft_strdup(s + i);
            return (result);
        }
        i++;
    }
    return (0);
}
