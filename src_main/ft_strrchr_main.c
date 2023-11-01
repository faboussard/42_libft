//
// Created by fanny on 01/11/23.
//

#include "../includes/libft.h"
#include "../includes/libft_main.h"

void ft_strrchr_main()
{
    char string[] = "couca";
    char c = 'c';
    printf("ft_strrchr is %s\n", ft_strrchr(string, c));
}