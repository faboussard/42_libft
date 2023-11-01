//
// Created by fanny on 01/11/23.
//
#include "../includes/libft.h"
#include "../includes/libft_main.h"

void ft_strncmp_main()
{
    char s1[] = "010";
    char s2[] = "001";
    printf("ft_strncmp is %d\n", ft_strncmp(s1, s2, 0));
    printf("strncmp is %d\n", strncmp(s1, s2, 0));
}