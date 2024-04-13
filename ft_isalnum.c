/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:56:06 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/13 17:57:28 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int ft_isalnum(int c)
{
    if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) || (c >= '0' && c <= '9'))
    {
        return (1);
    }
    return (0);
}



/*
#include <stdio.h>
int main(void)
{
    int c;

    c = ft_isalnum('?');
    printf("%d", c);
    return(0);
}*/