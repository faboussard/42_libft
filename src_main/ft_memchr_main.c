#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_memchr_main()
{
    char string[] = "couka";
    int c = 'k';
    printf("ft_memchr is %s\n", ft_memchr(string, c, 4));
    printf("memchr is %s\n", memchr(string, c, 4));
}

