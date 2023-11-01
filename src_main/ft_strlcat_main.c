//
// Created by emip on 01/11/23.
//
#include "../includes/libft.h"
#include "../includes/libft_main.h"

void ft_strlcat_main()
{
    char str1[] = "World";
    char str2[] = "hello, ";
    size_t len = ft_strlcat(str1, str2, sizeof(str2));
    printf("%zu\n", len);
    printf("%s\n", str2);
}