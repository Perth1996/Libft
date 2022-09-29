/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:05:36 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/26 13:54:20 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
//bringing *s1 + *s2 by use memmove and use malloc
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*str3;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	str1 = (char *)s1;
	str2 = (char *)s2;
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	if (!str1 || !str2)
		return (0);
	str3 = malloc(sizeof(char) * (len2 + len1 + 1));
	if (!str3)
		return (0);
	ft_memmove(str3, str1, len1);
	ft_memmove(str3 + len1, str2, len2);
	str3[len2 + len1] = '\0';
	return (str3);
}
/*
int	main(void)
{
	char *str1 = "tripule42";
	char *str2 = "tripule42";

	printf("%s\n", ft_strjoin(str1, str2));
}*/
