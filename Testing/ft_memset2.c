/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:10:43 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/12 18:59:13 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *p;
    unsigned char ch;

    p = (unsigned char *)b;
    ch = c;
    while (len--)
    {
        *p = ch;
        p++;
    }
    return (p);
}

int main(void)
{
    unsigned char str[] = "012345";
    int x = '.';
    size_t len = 2;

    printf("String modificad \n %s", ft_memset(str, x, len));
    return(0);
} 
