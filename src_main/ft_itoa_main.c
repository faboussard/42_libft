
#include "../src/libft.h"
#include "../includes/libft_main.h"
#include <stdio.h>
#include <stdlib.h>

void ft_itoa_main() {
	int n;
	char *string;


	n = -305;
	string = ft_itoa(n);
	if (string) {
	printf("ft_itoa is %s\n", string);
	free(string);
	}
	else
	printf("Allocation failed for ft_itoa");
}