/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:17:07 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/12 18:56:09 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *p = b;

    i = 0;
    while(i < len && p[i] != '\0')
    {
        p[i] = (unsigned char) c;
        i++;
    }
    return(b);
}
int main(void)
{
    char str[] = "01235";
    int c = '.';
    size_t len = 2;
    
    printf("String original: \n%s", str);
    printf("\nString modificado: \n%s", ft_memset(str, c, len));
    return(0);
}