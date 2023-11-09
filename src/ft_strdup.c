
#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    char *copy;
    size_t i;
    size_t len;

    if (s == NULL)
        return NULL;
    i = 0;
    len = ft_strlen(s);
    copy = malloc(sizeof(char) * (len + 1));
    if (copy == NULL)
        return NULL;
    while (i <= len)
    {
        copy[i] = s[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}