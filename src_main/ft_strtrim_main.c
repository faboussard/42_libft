
#include "../includes/libft.h"
#include "../includes/libft_main.h"
#include <stdlib.h>

void    ft_strtrim_main()
{
    char *s1 = "coucoutoi";
    char *s2 = "toi";
    char *isjoined = ft_strtrim(s1, s2);
    if (isjoined)
    {
        printf("ft_strjoin is %s\n", isjoined);
        free(isjoined);
    }
    else
        printf("allocation failed for ft_strjoin");
}