#include "../includes/libft.h"

int ft_memcmp(void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *byte_s1;
    unsigned char *byte_s2;

    i = 0;
    byte_s1 = (unsigned char *)s1;
    byte_s2 = (unsigned char *)s2;
    if (n == 0)
        return (0);
    while (i < n)
    {
        if ((byte_s1[i] > byte_s2[i]) || (byte_s1[i] < byte_s2[i]))
            return (byte_s1[i] - byte_s2[i]);
        i++;
    }
    return byte_s1[i] - byte_s2[i];
}