//
// Created by emip on 01/11/23.
//

#include "../includes/libft.h"
#include "../includes/libft_main.h"

void ft_strlcpy_main()
{
    char    dest[100];
    const char *src = "hello,you"; //10 char avec le vide
    size_t len = ft_strlcpy(dest, src, sizeof(dest));
    printf("%zu\n", len);
    printf("%s\n", dest);
}