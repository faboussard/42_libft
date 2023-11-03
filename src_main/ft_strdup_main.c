

#include "../includes/libft.h"
#include "../includes/libft_main.h"

void    ft_strdup_main() {
    char *original = "test";
    char *str1 = strdup(original);
    char *str2 = ft_strdup(original);
    printf("%s\n", strcmp(str1, str2) == 0 ? "ftstrdup is OK" : "ft_strdup is Fail");
    free(str1);
    free(str2);
}