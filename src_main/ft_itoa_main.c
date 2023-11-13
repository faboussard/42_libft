
#include "../src/libft.h"
#include "../includes/libft_main.h"
#include <stdio.h>
#include <stdlib.h>

void ft_itoa_main() {
	int n3;
	char *string3;


	n3 = 0;
	string3 = ft_itoa(n3);
	if (string3) {
	printf("ft_itoa 0 is %s\n", string3);
	free(string3);
	}
	else
	printf("Allocation failed for ft_itoa");
}