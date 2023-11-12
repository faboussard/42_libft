
#include <stdlib.h>
#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_calloc_main()
{
	size_t nmemb;
	size_t size;
	void *ptr1;
	void *ptr2;

	nmemb = 2147483647;
	size = 1;
	ptr1 = ft_calloc(nmemb, size);
	ptr2 = calloc(nmemb, size);
	printf("ft_calloc is %p\n", ptr1);
	printf("calloc is %p\n", ptr2);
}
