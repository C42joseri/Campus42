/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:58:09 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/13 18:02:01 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c)
{
    write(1, &c , 1);
}

void ft_putstring(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

/*
#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        write(1, "ERROR", 5);
        return(1);
    }
    char *str = argv[1];
    ft_putstring(str);
    return(0);
}*/