#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

int ft_atoi(const char *string);
int ft_isalpha(unsigned char c);
int ft_isdigit(unsigned char c);
int ft_isalnum(unsigned char c);
int ft_isascii(unsigned char c);
int ft_isprint(unsigned char c);
int ft_tolower(unsigned char c);
int ft_toupper(unsigned char c);
size_t ft_strlen(const char *string);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
void *ft_memset(void *s, int c, size_t n);
void *ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
char *ft_strdup(const char *s);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(void *s1, const void *s2, size_t n);
const char *ft_strnstr (const char *big, const char *little, size_t len);
char *ft_substr(char const *s1, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_striteri(char *s, char (*f)(unsigned int, char*));
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void ft_putchar_fd(char c, int fd);

#endif // LIBFT_H