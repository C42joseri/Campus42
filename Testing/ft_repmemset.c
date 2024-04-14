#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char ch = c;
    unsigned char *str = b;

    while(*str != '\0' && *str < len)
    {
        str = &ch; /*el &!!!!*/
        str++; /* str sin '*'!!!!*/
    }
    return (b);
}

int main(void)
{
    unsigned char string[] = "XXDos puntos";
    size_t l = 2;
    int x = '.';
    printf("%s", ft_memset(string, x, l));
    return(0);
}