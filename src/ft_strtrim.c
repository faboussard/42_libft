
#include <malloc.h>
#include "../includes/libft.h"

static int is_substr(char const *s1, char const *set) {
    size_t i;
    size_t j;
    int found;

    found = 0;
    i = 0;
    while (set[i]) {
        j = 0;
        while (s1[j]) {
            if (set[i] == s1[j])
                found++;
           j++;
        }
        i++;
    }
    return (found);
}

char *ft_strtrim(char const *s1, char const *set) {
    int len_s1;
    int len_set;
    int len_total_totrim;
    int len_new_string;
    int i;
    int j;
    char *new_string;

    len_total_totrim = is_substr(s1, set);
    if (len_total_totrim == 0)
        printf ("nothing to trim");
    len_s1 = ft_strlen(s1);
    len_set = ft_strlen(set);
    len_new_string = (len_s1 - len_total_totrim);
    i = 0;
    j = 0;
    new_string = malloc((sizeof(char) * len_new_string) + 1);
    if (new_string == NULL)
        return (0);
    while (s1[i])
    {
       if(!ft_strchr(set, s1[i]))
       {
           new_string[j] = s1[i];
           j++;
       }
       i++;
    }
    new_string[i] = '\0'; // ou i + 1 = 0 ?
    return (new_string);
}