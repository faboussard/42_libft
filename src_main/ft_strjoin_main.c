
#include "../includes/libft.h"
#include "../includes/libft_main.h"
#include <stdlib.h>

void    ft_strjoin_main()
{
    char *s1 = "coucou";
    char *s2 = "toi";
    char *isjoined = ft_strjoin(s1, s2);
    if (isjoined)
    {
        printf("ft_strjoin is %s\n", isjoined);
        free(isjoined);
    }
    else
        printf("allocation failed for ft_strjoin");
}