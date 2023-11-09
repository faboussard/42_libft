#include <malloc.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *new_string;

    new_string = malloc(sizeof(char) * (ft_strlen(s)) + 1);
    if (new_string == NULL)
        return (0);
    i = 0;
    while (s[i])
    {
        new_string[i] = f(i, s[i]);
        i++;
    }
    new_string[i] = '\0';
    return (new_string);
}