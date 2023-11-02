#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>

int ft_isalpha(unsigned char c);
int ft_isdigit(unsigned char c);
int ft_isalnum(unsigned char c);
int ft_isascii(unsigned char c);
int ft_isprint(unsigned char c);
int ft_tolower(unsigned char c);
int ft_toupper(unsigned char c);
int ft_strlen(char *string);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
void *ft_memset(void *s, int c, size_t n);
void *ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
char *ft_strdup(char *string);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(void *s1, const void *s2, size_t n);
const char *ft_strnstr (const char *big, const char *little, size_t len);

#endif // LIBFT_H