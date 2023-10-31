#include "../includes/libft.h"
#include "../includes/libft_main.h"

void ft_memset_main() {
    void *s1[19];
    void *s2[19];
    int c;
    size_t n;
    c = 65;
    n = 10;

 if (memcmp(ft_memset(s1, c, n), memset(s2, c, n), n) == 0) {
     //red() green() voir pour creer une fonction red
     printf("OK avec memcmp\n");
 }
 else
       printf("FAIL avec memcmp\n");

 ft_memset(s1, c, n);
 printf("%s\n", (char *) s1);
 memset(s2, c, n);
 printf("%s\n", (char *) s2);
}
