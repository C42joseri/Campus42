/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:47:36 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/21 18:57:07 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			c;

	c = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = (ft_strlen(s) - start);
	sub = (char *) malloc(len + 1);
	if (!s || !sub)
		return (NULL);
	while (s[c] != '\0' && c < len)
	{
		sub[c] = s[start];
		start++;
		c++;
	}
	sub[c] = '\0';
	return (sub);
}
/*int main(void)
{
    const char str[] = "Se copia o no??";
    unsigned int begin = 3;
    size_t max = 8;
    printf("\n%s", ft_substr(str, begin, max));
    return (0);
}
if (start >= ft_strlen(s))
	{
		sub[0] = '\0';
		return (sub);
	}
	^sobra
*/