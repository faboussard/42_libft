
#include "../includes/libft.h"
#include "../includes/libft_main.h"
#include <stdlib.h>

void    ft_substr_main()
{
    char *s1 = "coucou toi";
    char *issubstr = ft_substr(s1, 7, 3);
    if (issubstr)
    {
        printf("ft_strjoin is %s\n", issubstr);
        free(issubstr);
    }
    else
        printf("allocation failed for ft_strjoin");
}