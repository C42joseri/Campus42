int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
    {
        return (1);
    }
    return (0);
}

#include <stdio.h>

/*int main(void)
{
    int c;

    c = ft_isascii('a');
    printf("%d", c);
    return(0);
}