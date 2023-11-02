//
// Created by fanny on 01/11/23.
//
#include "../includes/libft.h"
#include "../includes/libft_main.h"

void ft_memcmp_main()
{
    char s1[] = "010";
    char s2[] = "001";
    printf("ft_memcmp is %d\n", ft_memcmp(s1, s2, 0));
    printf("memcmp is %d\n", memcmp(s1, s2, 0));
}