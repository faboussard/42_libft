#include "../src/libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void ft_putstr_fd_main()
{
    char *s_fd1 = "coucou";
    char *s_fd3 = "salut";
    const char *file = "./abc.txt";

    int fd_1 = 1;
    int fd_3 = open(file, O_WRONLY | O_APPEND | O_CREAT, 0644);
    if (fd_3 < 0)
        printf("error, cannot open or create file for fd_3\n");

    ft_putstr_fd(s_fd1, fd_1);
    ft_putstr_fd(s_fd3, fd_3);

    if (close(fd_3) < 0)
        printf("error closing the file fd3\n");
    else
        printf("file fd3 closed properly\n");
}