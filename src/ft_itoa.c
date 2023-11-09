#include <malloc.h>
#include "libft.h"


int size_n(int n) {
    int temp;
    int size;

    temp = n;
    size = 0;
    if (n < 0) {
        size++;
        temp = -temp;
    }
    while (temp != 0) {
        size++;
        temp /= 10;
    }
    return (size);
}

char *ft_itoa(int n) {
    int i;
    int size;
    int sign;
    int digit;
    char *string_int;

    size = size_n(n);
    i = size;

    sign = n < 0 ? -1 : 1;
    string_int = malloc(sizeof(char) * (size + 1));
    if (string_int == NULL)
        return (0);
    string_int[i] = '\0';
    if (size == 0) {
        string_int[size] = 0;
        return string_int;
    }
    if (sign == -1) {
        string_int[0] = '-';
        n = -n;
    }
    while (size >= 0) {
        digit = n % 10;
        string_int[size - 1] = digit + '0';
        n /= 10;
        size--;
    }
    return (string_int);
}