#include "libft.h"

// returns a pointer on the first occurence of little
const char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (little[i] == '\0')
        return (&big[i]);
    while (i < len)
    {
        while (little[i])
        {
            while (big[j])
            {
                if (little[i] == big[j])
                {
                    return (&little[i]);
                }
                j++;
            }
            i++;
        }
    }
    return (0);
}
