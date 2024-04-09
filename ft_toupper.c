
int ft_toupper(int c)
{
    if(c >= 97 && c <= 122)
    {
      return(c - 32);
    }
  return(c);
}
#include <stdio.h>
int main(void)
{
    printf("%c", ft_toupper('a'));
    return(0);
}
