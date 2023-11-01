cmake_minimum_required(VERSION 3.26)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled src_main/ft_memset_main.c
        src/ft_memset.c
        includes/libft.h
        src/ft_bzero.c
        src_main/ft_bzero_main.c
        includes/libft_main.h
        src_main/main.c
        src/ft_memcpy.c
        src_main/ft_memcpy_main.c
        src/memmove.c
        src_main/ft_memmove_main.c)
