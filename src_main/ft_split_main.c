
#include "../src/libft.h"
#include "../includes/libft_main.h"
#include <stdlib.h>

void    ft_split_main()
{
	char *s1 = "coucou,toi,ca,va";
	char c = ',';
	char **is_split = ft_split(s1, c);
	if (is_split)
	{
	printf("ft_split is %s\n", *is_split);
	free(is_split);
	}
	else
	printf("allocation failed for ft_split");
}