#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str = b;
    unsigned char ch = c;
    size_t i;

    i = 0;
    while(str[i] != '\0' && i < len)
    {
        str[i] = ch;
        i++;
    }
    return(b);
}

int main(void)
{
    unsigned char b[] = "012345";
    int x = '.';
    size_t len = 2;

    printf("string modificado: \n%s", ft_memset(b, x, len));
    return(0);
}