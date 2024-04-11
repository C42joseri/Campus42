/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:17:07 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/11 17:22:25 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *str = b;

    i = 0;
    while(i < len && str[i] != '\0')
    {
        str[i] = (unsigned char) c;
        i++;
    }
    return(str);
}
int main(void)
{
    char str[] = "0123";
    int c = '.c';
    size_t len = 4;
    
    printf("String original: \n%s", str);
    printf("\nString modificado: \n%s", ft_memset(str, c, len));
    return(0);
}