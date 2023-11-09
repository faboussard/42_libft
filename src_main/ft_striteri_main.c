#include "../src/libft.h"
#include "../includes/libft_main.h"
#include <stdlib.h>


static char myfunc(unsigned int i, char *c)
{
    printf("My inner function: index = %d and %c\n", i, *c);
    return (*c - 32);
}

void ft_striteri_main()
{
    char *s = "coucou";
    char *my_new_string;
    printf("before ft_striteri is %s\n", s);
    my_new_string = ft_striteri(s, myfunc);
 if (my_new_string) {
     printf("ft_striteri is %s\n", my_new_string);
     free(my_new_string);
 }
 else
     printf("Allocation failed for ft_striteri");
}
