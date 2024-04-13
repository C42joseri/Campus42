#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *p = b;
    size_t i;

    while(len-- &&  *p != '\0')
    {
        *p = c;
        p++;
    }
    return(p);
}
int main(void)
{
    unsigned char b[] = "012345";
    int x = '.';
    size_t len = 2;

    printf("string modificado: \n%s", ft_memset(b, x, len));
    return(0);
}