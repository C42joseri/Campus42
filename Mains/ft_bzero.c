/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 10:08:22 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/14 18:31:30 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *str = s;
    size_t i;
    
    i = 0;
    while (str[i] != '\0' && i < n)
    {
        str[i] = '\0';
        i++;
    }
}

int main(void)
{
    unsigned char str[] = "0123Son 4 ceros";
    size_t x = 4;
    ft_bzero(str, x);
    printf("%s", str);
    return (0);
}