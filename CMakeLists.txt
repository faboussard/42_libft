cmake_minimum_required(VERSION 3.23.2)
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
        src/ft_memmove.c
        src_main/ft_memmove_main.c src_main/ft_strdup_main.c src/ft_strdup.c src/ft_strlcpy.c src_main/ft_strlcpy_main.c src_main/ft_strlcat_main.c src/ft_strlcat.c src/strlen.c src_main/ft_strlen_main.c src/ft_isalpha.c src_main/ft_isalpha_main.c)
