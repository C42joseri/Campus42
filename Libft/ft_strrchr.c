/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:29:33 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/22 21:09:04 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			i;

	i = 0;
	ch = c;
	while (s[i] != '\0')
	{
		i++;
	}
	if (ch == 0)
	{
		return (&((char *)s)[i]);
	}
	while (i > 0)
	{
		i--;
		if (s[i] == ch)
		{
			return (&((char *)s)[i]);
		}
	}
	return (NULL);
}
