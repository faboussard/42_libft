#include "../src/libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void ft_putendl_fd_main()
{
    char *s_fd1 = "coucou";
    char *s_fd3 = "salut";
    const char *file = "./abc.txt";

    int fd_1 = 1;
    int fd_3 = open(file, O_WRONLY, 0777 | O_CREAT, 0777 | O_APPEND, 0777);
    if (fd_3 < 0)
        printf("error, cannot open file for fd_3\n");

    ft_putendl_fd(s_fd1, fd_1);
    ft_putendl_fd(s_fd3, fd_3);

    if (close(fd_3) < 0)
        printf("error closing the file fd3\n");
    else
        printf("file fd3 closed properly\n");
}