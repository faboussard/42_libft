
#include <malloc.h>
#include "../includes/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int len_s1;
    int len_s2;
    char *new_string;
    int i;
    int j;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    int total_length = len_s1 + len_s2;
    new_string = malloc(sizeof (char) * total_length + 1);
    if (new_string == NULL)
        return (0);
    i = 0;
    while (i < len_s1)
    {
        new_string[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < len_s2)
    {
        new_string[i] = s2[j];
        j++;
        i++;
    }
    new_string[i] = '\0';
    return (new_string);
}