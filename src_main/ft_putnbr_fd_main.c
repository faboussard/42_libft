#include "../includes/libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void ft_putnbr_fd_main()
{
    int n1;
    int n2;

    n1 = 33;
    n2 = 44;
    const char *file = "./abc.txt";

    int fd_1 = 1;
    int fd_3 = open(file, O_WRONLY | O_APPEND | O_CREAT, 0644);
    if (fd_3 < 0)
        printf("error, cannot open or create file for fd_3\n");

    ft_putnbr_fd(n1, fd_1);
    ft_putnbr_fd(n2, fd_3);

    if (close(fd_3) < 0)
        printf("error closing the file fd3\n");
    else
        printf("file fd3 closed properly\n");
}