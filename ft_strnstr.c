/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:45:04 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/26 13:27:24 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*large;
	char	*small;
	size_t	i;
	size_t	a;

	large = (char *)haystack;
	small = (char *)needle;
	i = 0;
	if (!*small)
		return (large);
	if (len > 0)
	{
		while (i < len && large[i] != '\0')
		{			
			a = 0;
			while (large[a + i] == small[a]
				&& small[a] != '\0' && i + a < len)
				a++;
			if (small[a] == '\0')
				return (large + i);
			i++;
		}
	}
	return (NULL);
}

/*
int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
        ptr = ft_strnstr(largestring, smallstring, 10);
	printf ("%s\n", ptr);

	return (0);
}*/
