/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:12:05 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/14 13:06:28 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t n;
    
    n = 0;
    if(src < dst)
    {
        n = len;
        while(n > 0)
        {
            n--;
            ((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
        }
    }
    else
    {
        n = 0;
        while(n < len)
        {
            ((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
            n++;
        }
    }
    return(dst);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned char dest[] = "ABCDEFGHIJK";
    unsigned char source[] = "12345";
    size_t x = 2;
    printf("%s", ft_memmove(dest, source, x));
    return(0);
}
/*Si dest > src: CON source 12 y x = 3, sale 12 porque del 2 en adelante son nulos
en cambio con x = 2 sale 12CDEFGHI porque no lee el nulo y sigue con el dest*/