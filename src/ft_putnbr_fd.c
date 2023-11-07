#include "../includes/libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char *n_array;
    n_array = ft_itoa(n);
    write(fd, n_array, ft_strlen(n_array));
}