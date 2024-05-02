/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:36:42 by jose-rig          #+#    #+#             */
/*   Updated: 2024/05/02 18:26:45 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_toklen(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

static void	free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s || !(ret = malloc(sizeof(char *) * (ft_toklen(s, c) + 1))))
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			if (!(ret[i++] = ft_substr(s - len, 0, len)))
			{
				free_split(ret);
				return (0);
			}
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}

/*
int main ()
{
    char const str[] = "Hola me llamo Juan Carlos";
    char c = ' ';
    char **split = ft_split(str, c);
    int i = 0;
    printf("%s \n", split[3]);

    while (split[i])
    {
        printf("%s \n", split[i]);
        i++;        
    }
    
    return (0); 
}
*/