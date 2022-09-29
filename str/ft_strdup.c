/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 07:20:00 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/26 13:51:35 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1) + 1;
	if (!len)
		return (NULL);
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	str = ft_memcpy(str, s1, len);
	return (str);
}
