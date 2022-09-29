/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:16:32 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/26 11:27:10 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//find char in index c 
char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == (char)c)
		{
			return ((char *)(s + a));
		}
		a++;
	}
	if (s[a] == (char)c)
		return ((char *)(s + a));
	return (NULL);
}
