/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:55:12 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/20 20:33:17 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*snew;
	size_t	i;
	size_t	slen;

	slen = 0;
	i = 0;
	while (s1[slen] != '\0')
	{
		slen++;
	}
	snew = (char *) malloc(slen + 1);
	if (!s1[i])
		return (NULL);
	while (s1[i] != '\0')
	{
		snew[i] = s1[i];
		i++;
	}
	snew[i] = '\0';
	return (snew);
}

/*int main(void)
{
    char str[] = "duplicate por zero";

    printf("\n%s", ft_strdup(str));
    return(0);
}
*/