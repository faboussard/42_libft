
#include "../includes/libft.h"
#include "../includes/libft_main.h"
#include <stdlib.h>

void    ft_strtrim_main()
{
    char *s1 = "toicoucoutoitoi";
    char *s2 = "toi";
    char *istrim = ft_strtrim(s1, s2);
    if (istrim)
    {
        printf("ft_strtrim is %s\n", istrim);
        free(istrim);
    }
    else
        printf("allocation failed for ft_strtrim");
}