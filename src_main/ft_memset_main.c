#include "../includes/libft.h"
#include "../includes/libft_main.h"

void ft_memset_main() {
    int s1[19];
    int s2[19];
    int c;
    size_t n;
    c = 65;
    n = 10;

 if (memcmp(ft_memset(s1, c, n), memset(s2, c, n), n) == 0) {
     printf("ft_memset is OK with memcmp\n");
 }
 else
       printf("ft_memset FAIL with memcmp\n");

 ft_memset(s1, c, n);
 printf("ft_memset is %s\n", (char *) s1);
 memset(s2, c, n);
 printf("ft_memset is %s\n", (char *) s2);
}
