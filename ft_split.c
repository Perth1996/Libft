/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:50:32 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/26 19:29:38 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_countword(char const *s, char c)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			if (s[i] == c || s[i] == '\0')
				a++;
		}
	}
	return (a);
}

char	*ft_runword(char const *s, char c, size_t *start)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = 0;
	while (s[*start] == c)
		*start += 1;
	while (s[(*start) + len] != '\0' && s[(*start) + len] != c)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		str[i] = s[(*start) + i];
		i++;
	}
	*start += len;
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	start;
	size_t	count;

	if (!s)
		return (NULL);
	i = 0;
	start = 0;
	count = ft_countword(s, c);
	ptr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ptr)
		return (NULL);
	while (i < count)
	{
		ptr[i] = ft_runword(s, c, &start);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
/*
void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

int	main(void)
{
	char *str = "            ";
	char c = ' ';
	printf("len str: %lu\n", ft_strlen(str));
	printf("cw: %zu\n", ft_countword(str, c));
	char **ptr = ft_split(str, c);
	for (size_t i = 0; i < ft_countword(str, c); i++)
		printf("index %zu: %s\n", i, ptr[i]);
	ft_free(ptr);

	return (0);
}*/
