#include <string.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned int i;
    unsigned char *str;

    *str = b;

    i = 0;
    while(i < len)
    {
        str[i] = c;
        i++;
    }
    return(b);
}
