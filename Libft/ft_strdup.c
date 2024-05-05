/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:55:12 by jose-rig          #+#    #+#             */
/*   Updated: 2024/05/04 13:51:51 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (!snew)
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