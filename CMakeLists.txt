cmake_minimum_required(VERSION 3.23.2)
project(mylib C)

set(CMAKE_C_STANDARD 11)

include_directories("includes")

add_executable(mylib src_main/ft_memset_main.c
        src/ft_memset.c
        src/libft.h
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
        src/ft_strchr.c
        src_main/ft_strchr_main.c
        src_main/ft_isprint_main.c
        src_main/ft_toupper_main.c
        src_main/ft_tolower_main.c
        src/ft_strrchr.c
        src_main/ft_strrchr_main.c
        src_main/ft_strncmp_main.c
        src/ft_strncmp.c
        src/ft_memchr.c
        src/ft_memchr.c
        src_main/ft_isascii_main.c
        src_main/ft_memchr_main.c
        src/ft_memcmp.c
        src_main/ft_memcmp_main.c
        src/ft_strnstr.c
        src_main/ft_strnstr_main.c
        src/ft_strjoin.c
        src_main/ft_strjoin_main.c
        src_main/ft_strtrim_main.c
        src/ft_strtrim.c
        src/ft_substr.c
        src_main/ft_substr_main.c
        src/ft_itoa.c
        src_main/ft_itoa_main.c
        src_main/ft_atoi_main.c
        src/ft_atoi.c
        src/ft_strmapi.c
        src_main/ft_strmapi_main.c
        src_main/ft_striteri_main.c
        src/ft_striteri.c
        src/ft_putstr_fd.c
        src_main/ft_putstr_fd_main.c
        src_main/ft_putendl_fd_main.c
        src/ft_putendl_fd.c
        src/ft_putnbr_fd.c
        src_main/ft_putnbr_fd_main.c
        src/ft_lstnew_bonus.c
        src/ft_calloc.c
        src_main/ft_lstnew_main.c
        src/ft_lstadd_front_bonus.c
        src_main/ft_lstadd_front_main.c
        src/ft_lstsize_bonus.c
        src_main/ft_lstsize_main.c
        src_main/ft_isalnum_main.c
        src_main/ft_digit_main.c
        src/ft_lstlast_bonus.c
        src_main/ft_lstlast_main.c
        src_main/ft_lstlast_main2.c
        src/ft_lstadd_back_bonus.c
        src_main/ft_lstadd_back_main.c
        src/ft_lstdelone_bonus.c
        src/ft_lstclear_bonus.c
        src_main/ft_lstdelone_main.c
        src/ft_lstiter_bonus.c
        src_main/ft_lstiter_main.c
        src/ft_split.c
        src_main/ft_calloc_main.c
        src_main/del.c
        src/ft_lstmap_bonus.c
        src/ft_putchar_fd.c
)
