#include <string.h>

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}
#include <stdio.h>

int main(void)
{
    char a[] = "Str son 9";

    printf("%zu", ft_strlen(a));
    return(0);

}