//
// Created by fanny on 31/10/23.
//
#include "../includes/libft.h"

void ft_memcpy_main()
{
    char s1[11] = "calin";
    char s2[11] = "cacocoucou";
    char s3[11] = "calin";
    char s4[11] = "cacocoucou"; //bien specifier la taille sinon comportement erratique
    printf("dest for s1 is %s\n", s1);
    printf("dest for s3 is %s\n", s3);
    ft_memcpy(s1, s2, 10);
    memcpy(s3, s4, 10);
    printf("with ft_memcpy, dest is now %s\n", s1);
    printf("with memcpy, dest is now %s\n", s3);
}
