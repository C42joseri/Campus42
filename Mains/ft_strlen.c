/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:59:19 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/14 17:09:55 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return(i);
}
/*
para que compile, poner la libreria arriba
#include <string.h>
#include <stdio.h>

int main(void)
{
    char a[] = "Str son 9";

    printf("%zu", ft_strlen(a));
    return(0);

}*/