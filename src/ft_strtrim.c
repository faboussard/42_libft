
#include <malloc.h>
#include "../includes/libft.h"

// s1 = toicoutoicoutoitoi
// set = toi

int index_end(const char *s1, const char *set)
{
    size_t i;
    size_t j;
    i = ft_strlen(s1);
    printf("i is %d\n", i);
    while (i > 0)
    {
        if (ft_strrchr(set, s1[i]) == NULL)
            return (i);
        i--;
        printf("set is %s\n", set);
        printf("set de i est %c\n", set[i]);
        printf("s1 de i est %c\n", s1[i]);
    }
    return (i);
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
    int end;

    end = index_end(s1, set);
    start = index_start(s1, set);
    printf("i est %d\n", start);
    printf("s[i] est %c\n", s1[start]);
    printf("i est %d\n", end);
    printf("s[i] est %c\n", s1[end]);
    return (s1);
}