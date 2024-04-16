/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:29:33 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/16 18:12:06 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;

	ch = c;
	while (*s != '\0')
	{
		s++;
	}
	while (*s != ch)
	{
		s--;
		if (*s == ch)
		{
			return ((char *)s);
		}
		else
		{
			return (0);
		}
	}
	if (ch == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
