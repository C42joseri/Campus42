/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:29:33 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/17 13:16:45 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    unsigned char ch;
    
    ch = c;
    while(*s != '\0')
    {
        s++;
    }
    while(*s != ch)
    {
        s--;
        if(*s == ch)
        {
            return((char *)s);
        } 
    }
    if (ch == '\0')
    {
        return((char*)s);
    }
    return(0);
}

int main(void)
{
    char str[] = "El ultimo . punto . esta aqui";
    int x = '.';
    printf("Encontrado el ultimo '.':\n%s", strrchr(str, x));
    return(0);
}