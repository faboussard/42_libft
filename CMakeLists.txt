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
        src_main/ft_memmove_main.c src_main/ft_strdup_main.c src/ft_strdup.c src/ft_strlcpy.c src_main/ft_strlcpy_main.c src_main/ft_strlcat_main.c src/ft_strlcat.c src/ft_strlen.c src_main/ft_strlen_main.c src/ft_isalpha.c src_main/ft_isalpha_main.c
        src/ft_isascii.c
        src/ft_isdigit.c
        src/ft_isprint.c
        src/ft_isalnum.c
        src/ft_toupper.c
        src/ft_tolower.c
        src/fr_strchr.c
        src_main/ft_strchr_main.c
        src_main/ft_isprint_main.c
        src_main/ft_toupper_main.c
        src_main/ft_tolower_main.c
        src/fr_strrchr.c
        src_main/ft_strrchr_main.c
        src_main/ft_strncmp_main.c
        src/ft_strncmp.c
        src/ft_memchr.c
        src/ft_memchr.c
        src_main/ft_isascii_main.c
        src_main/ft_memchr_main.c
        src/ft_memcmp.c
        src_main/ft_memcmp_main.c
        src/fr_strnstr.c
        src_main/ft_strnstr_main.c)
