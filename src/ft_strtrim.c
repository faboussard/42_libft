
#include <malloc.h>
#include "../includes/libft.h"

// s1 = toicoutoicoutoitoi
// set = toi
//Allocates (with malloc(3)) and returns a copy of s1 with the characters specified in set removed from the beginning and the end of the string.
size_t index_end(const char *s1, const char *set)
{
    size_t i;
    i = ft_strlen(s1);
    while (i >= 1)
    {
        i--;
        if (ft_strchr(set, s1[i]) == NULL)
            return (i);
    }
    return (i);
}

size_t index_start(const char *s1, const char *set)
{
    size_t i;
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
    size_t s1_strlen;
    size_t start;
    size_t end;
    size_t len;
    char *s1_copy_trimmed;

    s1_strlen = ft_strlen(s1);
    end = s1_strlen - index_end(s1, set);
    start = index_start(s1, set);
    len = s1_strlen - end;
    s1_copy_trimmed = ft_substr(s1, start, len);
    printf("start est %d\n", start);
    printf("end est %d\n", end);
    printf("len est %d\n", len);
    printf("s1_strlen est %d\n", s1_strlen);
    return (s1_copy_trimmed);
}