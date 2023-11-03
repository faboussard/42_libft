

#include "../includes/libft.h"
#include "../includes/libft_main.h"

void    ft_substr_main() {
    char *original = "alors la zone";
    int start;
    size_t len;

    start = 5;
    len = 6;
    char *sub_str = ft_substr(original, start, len);
    printf("%s\n",sub_str);
    free(sub_str);
}