
#include "../src/libft.h"
#include "../includes/libft_main.h"

/*size_t static reset(size_t *n)
{
    n = 0;
    return *(size_t) n;
}*/

void ft_bezero_main()
{
    char s0[] = "qwerty";
    char s1[] = "qwerty";
    char s2[] = "qwerty";
    char s3[] = "qwerty";
    size_t ok;
    size_t *n;
    ok = 0;
    n = 0;

    bzero(s0, 6);
    ft_bzero(s1, 6);
    printf("bzero is %s\n", s0);
    printf("ft bezero is %s\n", s1);

    /*while (n != 6)
    {
        if (strcmp(&s0[n], &s1[n]) != 0)
        {
            printf("fail");
            reset(n);
            ok++;
            return;
        }
        n++;
    }
    if (ok == 0)
        printf("ok bezero")*/
}