/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:33:50 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/14 12:56:27 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *d;
    char *s;
    
    i = 0;
    d = (char *)dst;
    s = (char *)src;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}

int main(void)
{
    char src[] = "Hola que tal";
    char dst[] = "Muy bien.";
    size_t x = 23;
    printf("%s", ft_memcpy(dst, src, x));
    return (0);
}