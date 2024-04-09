int ft_tolower(int c)
{
    if(c >= 65 && c <= 90)
    {
      return(c + 32);
    }
  return(c);
}
#include <stdio.h>
int main(void)
{
    printf("%c", ft_tolower('a'));
    return(0);
}
