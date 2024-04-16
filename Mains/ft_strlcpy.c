/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:10:08 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/16 12:06:50 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if(dstsize ==0)
	{
		while(src[i])
		{
			i++;
		}
		return(i);
	}
	while(i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
int main(void)
{
    char source[] = "12345";
    char destino[] = "ABC";
    size_t d = 8;
    printf("%zu\n", ft_strlcpy(destino, source, d));
    return(0);
}