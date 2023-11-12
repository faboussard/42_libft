//
// Created by emip on 01/11/23.
//
#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_strlcat_main()
{
	char dest[11] = "a";
	size_t len = ft_strlcat(dest, "salut", 15);
	printf("ft_strlcat is %zu\n", len);
	printf("ft_strlcat is %zu\n", len);
}