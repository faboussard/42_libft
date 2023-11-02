#include "../includes/libft.h"

// returns a pointer on the first occurence of little

const char *ft_strnstr(const char *big, const char *little, size_t len)
{
    if (*little == '\0') // Check if little is an empty string
        return big;

    while (*big && len)
    {
        size_t i = 0;
        while (big[i] == little[i] && little[i] && len - i)
            i++;
        if (little[i] == '\0')
            return big;
        big++;
        len--;
    }

    return NULL;
}
