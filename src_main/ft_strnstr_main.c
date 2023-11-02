//
// Created by fanny on 01/11/23.
//

#include "../includes/libft.h"
#include "../includes/libft_main.h"

void ft_strnstr_main()
{
    char string1[] = "couka";
    char string2[] = "salutcoukacou";
    printf("ft_strnstr is %s\n", ft_strnstr(string2, string1, 20));
}