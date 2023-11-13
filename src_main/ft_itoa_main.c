
#include "../src/libft.h"
#include "../includes/libft_main.h"
#include <stdio.h>
#include <stdlib.h>

void ft_itoa_main()
{
    char *string1;
    char *string2;
	char *string3;

    string1 = ft_itoa(-350);
    string2 = ft_itoa(350);
	string3 = ft_itoa(0);
	if (string3) {
	printf("ft_itoa 0 is %s\n", string3);
	free(string3);
	}
	else
	printf("Allocation failed for ft_itoa");
    if (string1) {
        printf("ft_itoa -350 is %s\n", string1);
        free(string1);
    }
    else
        printf("Allocation failed for ft_itoa");
    if (string2) {
        printf("ft_itoa 350 is %s\n", string2);
        free(string2);
    }
    else
        printf("Allocation failed for ft_itoa");
}