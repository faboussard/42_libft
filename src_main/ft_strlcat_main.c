//
// Created by emip on 01/11/23.
//
#include "../includes/libft.h"
#include "../includes/libft_main.h"

void ft_strlcat_main()
{

    size_t len_str2;
    char str1[100] = "World";
    char str2[100] = "hello,";
    len_str2 = (ft_strlen(str2) + 1);
    size_t len = ft_strlcat(str2, str1, len_str2);
    printf("%zu\n", len);
    printf("%zu\n", len_str2);
}