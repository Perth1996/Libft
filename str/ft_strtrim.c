/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:14:57 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/26 19:03:58 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_start(char *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	return (s1 + i);
}

static size_t	ft_end(char *s1, char const *set)
{
	size_t	len;
	char	*str;

	str = ft_start(s1, set);
	len = ft_strlen(str);
	while (len)
	{
		if (ft_strchr(set, str[len]) == NULL)
			break ;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*i;
	char	*r;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	str = (char *)s1;
	i = ft_start(str, set);
	r = malloc(ft_end(str, set) + 2);
	if (!r)
		return (NULL);
	ft_strlcpy(r, i, ft_end(str, set) + 2);
	return (r);
}
/*
int	main(void)
{
	char	str[] = "lo pe rth et";
	 
	char	set[] = "let";

	printf ("result	=%s\n", ft_strtrim(str, set));
	printf ("index s	=%s\n", ft_start(str, set));
	printf ("index e	=%zu\n", ft_end (str, set));
}*/
/*
char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	char	*str;
	int		len;

	if (!s1 || !set)
		return (NULL);
	str = (char *)s1;
	while (*str)
	{
		if (ft_strchr(set, *str) == NULL)
			break ;
		str++;
	}
	len = ft_strlen(str);
	while (len)
	{
		if (ft_strchr(set, str[len - 1]) == NULL)
			break ;
		len--;
	}
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, str, len + 1);
	return (res);
}*/
