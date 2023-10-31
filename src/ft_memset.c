#include "../includes/libft.h"

void *ft_memset(void *s, int c, size_t n) {
    size_t i;
    unsigned char *byte;

    i = 0;
    byte = (unsigned char *) s;
    while (i < n) {
        byte[i] = (unsigned char) c;
        i = i + 1;
    }
    return (void *) byte;
}