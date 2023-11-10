//
// Created by fanny on 01/11/23.
//

#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_strrchr_main()
{
    char string[] = "couca";
    int c = 'c';
    printf("ft_strrchr is %s\n", ft_strrchr(string, c));
}