#include <stdlib.h>
#include "../src/libft.h"
#include "../includes/libft_main.h"

void ft_atoi_main()
{
	printf("ft_atoi is %d\n", ft_atoi("    4105"));
	printf("atoi is %d\n", atoi("     4105"));
	printf("ft_atoi is %d\n", ft_atoi("    410   5"));
	printf("atoi is %d\n", atoi("     410   5"));
	printf("ft_atoi is %d\n", ft_atoi("4105"));
	printf("atoi is %d\n", atoi("4105"));
    printf("ft_atoi is %d\n", ft_atoi("-4105"));
    printf("atoi is %d\n", atoi("-4105"));
    printf("ft_atoi is %d\n", ft_atoi("0"));
    printf("atoi is %d\n", atoi("0"));
    printf("ft_atoi is %d\n", ft_atoi("-2147483648"));
    printf("atoi is %d\n", atoi("-2147483648"));
    printf("ft_atoi is %d\n", ft_atoi("-2147483649"));
    printf("atoi is %d\n", atoi("-2147483649"));
    printf("ft_atoi is %d\n", ft_atoi("2147483649"));
    printf("atoi is %d\n", atoi("2147483649"));
	printf("ft_atoi is %d\n", ft_atoi("3000000000000"));
	printf("atoi is %d\n", atoi("3000000000000"));
	printf("ft_atoi is %d\n", ft_atoi("-3000000000000"));
	printf("atoi is %d\n", atoi("-3000000000000"));
}
