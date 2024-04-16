/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:31:04 by jose-rig          #+#    #+#             */
/*   Updated: 2024/04/16 19:17:47 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			i;

	str = (unsigned char *)b;
	ch = (unsigned char *)c;
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		str[i] = ch;
		i++;
	}
	return (b);
}