//
// Created by fanny on 01/11/23.
//

#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_strchr_main()
{
	char string[] = "couka";
	int c = '\0';
	printf("ft_strchr doit renvoyer couca et il renvoie %s\n", ft_strchr("couca", 'c'));
	printf("strchr renvoie %s\n", strchr("couca", 'c'));
	printf("ft_strchr doit renvoyer NULL et il renvoie %s\n", ft_strchr("", 'k'));
	printf("strchr renvoie %s\n", strchr("", 'k'));
	printf("ft_strchr doit renvoyer \0 et il renvoie %s\n", ft_strchr("lala", '\0'));
	printf("strchr renvoie %s\n", strchr("lala", '\0'));
}