#include "../src/libft.h"
#include "../includes/libft_main.h"
#include <stdlib.h>


static void myfunc(unsigned int i, char *c)
{
	printf("My inner function: index = %d and %c\n", i, *c);
}

void ft_striteri_main()
{
	char *s = "coucou";
	printf("before ft_striteri is %s\n", s);
	ft_striteri(s, myfunc);
	printf("ft_striteri is %s\n", s);
}