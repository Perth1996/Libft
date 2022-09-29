/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:09:25 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/26 15:12:37 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize && !dst)
		return (0);
	i = ft_strlen(dst);
	if (i >= dstsize && i >= 0)
		return (dstsize + ft_strlen(src));
	while (*src && i < dstsize - 1)
	{
		dst[i] = *src++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + i);
}
/*
int	main()
{
	int	i = 0;
	char	s[30] = "lorem ipsum dolor sit amet";
	char	d[10] = "a";
//	printf ("%lu\n" ,strlcat(d, s, i));
	printf ("%lu\n" ,ft_strlcat(d, s, i));
}*/
