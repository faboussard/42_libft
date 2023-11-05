
#include <malloc.h>
#include "../includes/libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int len_s1;
    int len_set;
    int i;
    int j;
    int start;
    int len_new_string;
    char *new_string;

    len_s1 = ft_strlen(s1);
    len_set = ft_strlen(set);
    len_new_string = (len_s1 - len_set);
    i = 0;
    j = 0;
    start = 0;
    new_string = malloc(sizeof (char) * len_new_string + 1);
    if (new_string == NULL)
        return (0);
    while (i < len_s1) {
            while (set[i]) {
                while (s1[j]) {
                    if (set[i] == s1[j]) {
                        start++;
                    }
                    j++;
                }
                i++;
            }
        }
    while (start < )
        new_string[i] = set[i];
        i++;
    }
    new_string[i] = '\0';
    return (new_string);
}
