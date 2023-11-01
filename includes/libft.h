#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>

int ft_isalpha(char c);
int ft_strlen(char *string);
void *ft_memset(void *s, int c, size_t n);
void *ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
char *ft_strdup(char *string);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);


#endif // LIBFT_H