//
// Created by fanny on 31/10/23.
//
#include <stdio.h>
#include "../src/libft.h"
#include "libft_main.h"

void ft_memcpy_main()
{
    char *s_dest1 = NULL;
    char *s_src1 = NULL;
	char s_dest2[11] = "calin";
	char s_src2[11] = "test basic du memcpy !";
	char s_dest3[11] = "calin";
	char s_src3[11] = "test basic du memcpy !";
    char s_dest4[11] = "calin";
    char s_src4[11] = "";
    char s_dest5[11] = "";
    char s_src5[11] = "test basic du memcpy";
    printf("2 ft_memcpy dest for s1 is %s\n", ft_memcpy(s_dest1, s_src1, 3));
    printf("2 memcpy dest for s1 is %s\n", memcpy(s_dest1, s_src1, 3));


    printf("2 ft_memcpy dest for s1 is %s\n", ft_memcpy(s_dest2, s_src2, 100));
	printf("2 memcpy dest for s3 is %s\n", memcpy(s_dest2, s_src2, 100));

    printf("3 ft mmcpy  is %s\n", ft_memcpy(s_dest3, s_src3, 0));
    printf("3 mmcpy  is %s\n", memcpy(s_dest3, s_src3, 0));

    printf("4 ft mmcpy  is %s\n", ft_memcpy(s_dest4, s_src4, 1));
    printf("4 mmcpy is %s\n", memcpy(s_dest4, s_src4, 1));

    printf("5 ft mmcpy  is %s\n", ft_memcpy(s_dest5, s_src5, 1));
    printf("5 mmcpy is %s\n", memcpy(s_dest5, s_src5, 1));
}
