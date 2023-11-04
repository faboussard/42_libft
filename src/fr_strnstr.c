#include "../includes/libft.h"

// returns a pointer on the first occurence of little
const char *ft_strnstr (const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    int found;

    found = 0;
    i = 0;
    j = 0;
   if (little[i] == 0)
      return (&big[i]);
   else {
        while (i < len) {
            while (little[i]) {
                while (big[j]) {
                    if (little[i] == big[j]) {
                        found++;
                    }
                    j++;
                }
                i++;
            }
        }
        if (found == i)
            return (&little[i]);
        else
            return (0);
    }
}
