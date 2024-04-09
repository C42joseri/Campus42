int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return (1);
    }
    return (0);
}

#include <stdio.h>

/*int main(void)
{
    int c;

    c = ft_isdigit('a');
    printf("%d", c);
    return(0);
}