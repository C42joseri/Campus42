#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	void	*p;

	p = b;
	while (len--)
		*(unsigned char *)p++ = (unsigned char)c;
	return (b);
}
int main(void)
{
    unsigned char str[] = "012345";
    int x = '.';
    size_t len = 2;

    printf("String modificado \n %s", ft_memset(str, x, len));
    return(0);
}