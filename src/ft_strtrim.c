
#include <malloc.h>
#include "../includes/libft.h"

static const char *ft_strstr (const char *big, const char *little)
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

char *ft_strtrim(char const *s1, char const *set)
{
    int len_s1;
    int len_set;
    int len_new_string;
    char *new_string;
    const char *to_trim;

    len_new_string = (len_s1 - len_set);

    new_string = malloc(sizeof (char) * len_new_string);
    to_trim = ft_strstr(s1, set);

    //S1 sera coucouettoi
    // set sera toi
    //newsintr sera coucouet
    //to trim sera toi

    new_string[i] = '\0';
    return (new_string);
}
