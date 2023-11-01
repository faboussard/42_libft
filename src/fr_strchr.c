#include "../includes/libft.h"

// returns a pointer on the first occurence of c
char *ft_strchr(const char *s, int c)
{
    int i;
    int found;

    found = 0;
    i = 0;
    while (s[i]) {
        if (s[i] == c) {
            found = 1;
            break;
        }
        i++;
    }
    if (found == 1)
        return (&s[i]);
    else
        return (0);
}
