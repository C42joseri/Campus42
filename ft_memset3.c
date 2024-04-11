/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:31:01 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/11 18:33:40 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    char *p;

    p = (char *)b;
    while(len > 0)
    {
        p[len - 1] = c;
        len--;
    }
    return(b);
}

int main(void)
{
    unsigned char str[] = "012345";
    int x = '.';
    size_t len = 2;

    printf("String modificad \n %s", ft_memset(str, x, len));
    return(0);
}