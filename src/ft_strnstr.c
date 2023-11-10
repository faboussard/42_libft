#include "libft.h"

//RETURN VALUES
//If little is an empty string, big is returned;
// if little	occurs nowhere in big, NULL is returned;
// otherwise a pointer to	the first character of the first occurrence of little is returned
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    char *little_found;
    little_found = (char *) big;

    i = 0;
    if (little[i] == '\0')
        return (&little_found[i]);
    while (big[i] != '\0')
    {
        j = 0;
        while (big[i + j] == little[i] && (i + j) < len)
        {
            if (big[i + j] == '\0' && little[j] == '\0')
                return (&little_found[i]);
            j++;
        }
        if (little[i] == '\0')
            return (little_found + j);
        i++;
    }
    return (0);
}
