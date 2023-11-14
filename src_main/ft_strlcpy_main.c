
#include "../src/libft.h"
#include "../includes/libft_main.h"
#include <bsd/string.h>

void ft_strlcpy_main()
{
	char    dest[] = "";
	const char *src = "hello,you"; //10 char avec le vide
    char    dest2[] = "";
    const char *src2 = "hello,you"; //10 char avec le vide
	size_t len = ft_strlcpy(dest, src, sizeof(dest));
	printf("ft_strlcpy is %zu\n", len);
    printf("dest is %s\n", dest);
    printf("strlcpy dest is %zu\n", strlcpy(dest2, src2, sizeof(dest)));
	printf("%s\n", dest2);
}