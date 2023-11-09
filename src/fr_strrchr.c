#include "../includes/libft.h"

// returns a pointer to the last occurence of c
char *ft_strrchr(const char *s, int c)
{
    size_t i;
    char *result;

    i = ft_strlen(s);
    while (i > 0)
    {
        if (s[i] == c)
        {
            result = ft_strdup(s);
            return (result);
        }
        i--;
    }
    return (0);
}
