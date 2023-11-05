//
// Created by fanny on 01/11/23.
//

#include "../includes/libft.h"
#include "../includes/libft_main.h"
#include <strings.h>

void ft_strnstr_main()
{
    char big[] = "coucou";
    char little[] = "cou";
    printf("ft_strnstr is %s\n", ft_strnstr(big, little, 20));
    //printf("strnstr is %s\n", strnstr(big, little, 20));
}