 int ft_isalnum(int c)
{
    if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) || (c >= '0' && c <= '9'))
    {
        return (1);
    }
    return (0);
}

#include <stdio.h>

/*int main(void)
{
    int c;

    c = ft_isalnum('?');
    printf("%d", c);
    return(0);
}