/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-rig <jose-rig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:36:09 by jose-rig          #+#    #+#             */
/*   Updated: 2024/05/06 21:58:54 by jose-rig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *l;

    l = malloc(sizeof(struct s_list));
    if(!l)
        return(NULL);
    l->content = content;
    l->next = NULL;
    return(l);
}