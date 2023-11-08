
#include <malloc.h>
#include "../includes/libft.h"

// s1 = toicoutoicoutoitoi
// set = toi

int index_end(const char *s1, const char *set)
{
    size_t i;
    i = ft_strlen(s1);
    while (s1[i] != '\0')
    {
        if (ft_strchr(set, s1[i]) == NULL)
            return (i);
        i--;
    }
}

int index_start(const char *s1, const char *set)
{
    int i;
    i = 0;
    while (s1[i] != '\0') // toujours preciser le null ou le '\'0 pour comprndre le type de donnees
    {
        if (ft_strchr(set, s1[i]) == NULL)
            return (i);
        i++;
    }
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    start = index_start(s1, set);
    printf("i est %d\n", start);
    printf("s[i] est %c\n", s1[start]);
    return (s1);
}