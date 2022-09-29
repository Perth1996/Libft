/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:50:00 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/24 14:02:58 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*c;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		c = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(c, del);
	}
}
