//
// Created by fanny on 01/11/23.
//

#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_strchr_main()
{
    char string[] = "couka";
    int c = 'k';
    printf("ft_strchr doit renvoyer ka et il renvoie %s\n", ft_strchr(string, c));
}