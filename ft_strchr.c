/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:47:47 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/13 18:27:31 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr(const char *s, int c)
{
    while(*s != '\0')
    {
        if(*s == c)
        {
            return((char *)s);
        }
        s++;
    }
    if (c == '\0')
    {
        return((char *)s);
    }
    return(0);
}
#include <stdio.h>

int main(void)
{
    const char string[] = "Donde esta el punto. Aqui esta";
    int x;
    x = '.';
    printf("El . :\n%s", ft_strchr(string, x));
    return(0);
}