#include "../src/libft.h"
#include "../includes/libft_main.h"
#include <stdlib.h>


static char myfunc(unsigned int i, char c)
{
	printf("My inner function: index = %d and %c\n", i, c);
	return (c - 32);
}

void ft_strmapi_main()
{
	char const *s = "coucou";
	char const *my_new_string;
	printf("before ft_strmapi is %s\n", s);
	my_new_string = ft_strmapi(s, myfunc);
 if (my_new_string) {
	 printf("ft_strmapi is %s\n", my_new_string);
	 free(my_new_string);
 }
 else
	 printf("Allocation failed for ft_strmapi");
}
