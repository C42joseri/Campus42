int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    return (0);
}

#include <stdio.h>

/*int main(void)
{
    int c;

    c = ft_isalpha('a');
    printf("%d", c);
    return(0);
}