/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:22:50 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/27 14:07:36 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    int i;
    int np;
    int l;
    char **splitted;
    
    i = 0;
    np = 1;
    l = 0;
    while(s[i])
    {
        if(s[i] == c)
        {
            np++;
            l = i;
            j
        }
        i++;
    }
    splitted = (char **) malloc(np * sizeof(char))
    splitted = malloc(i - np + (1 * np))
    i = 0;
    
}