//
// Created by fanny on 01/11/23.
//

#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_strrchr_main()
{
		printf("ft_strchr doit renvoyer couca et il renvoie %s\n", ft_strrchr("couca", 'c'));
		printf("strchr renvoie %s\n", strrchr("couca", 'c'));
		printf("ft_strchr doit renvoyer NULL et il renvoie %s\n", ft_strrchr("", 'k'));
		printf("strchr renvoie %s\n", strrchr("", 'k'));
		printf("ft_strchr doit renvoyer \0 et il renvoie %s\n", ft_strrchr("lala", '\0'));
		printf("strchr renvoie %s\n", strrchr("lala", '\0'));
}