#include "../includes/libft.h"

// returns a pointer to the last occurence of c
char *ft_strrchr(const char *s, int c)
{
    int i;
    int found;

    i = 0;
    while (s[i])
        i++;
    found = 0;
    while (i > 0)
    {
        if (s[i] == c)
        {
            found = 1;
            break;
        }
        i--;
    }
    if (found == 1)
        return (&s[i]);
    else
        return (0);
}
