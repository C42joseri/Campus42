#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c , 1);
}

void ft_putstring(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        write(1, "ERROR", 5);
        return(1);
    }
    char *str = argv[1];
    ft_putstring(str);
    return(0);
}