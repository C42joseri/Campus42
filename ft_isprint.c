int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
    {
        return (1);
    }
    return (0);
}

/*#include <stdio.h>

int main(void)
{
    int c;

    c = ft_isprint('a');
    printf("%d", c);
    return(0);
}*/