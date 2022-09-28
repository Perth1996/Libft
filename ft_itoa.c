/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:04:05 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/26 13:45:03 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_countn(long n)
{
	int		i;
	long	a;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	if (n == 0)
		return (1);
	a = n;
	while (a > 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int N)
{
	int		i;
	char	*str;
	long	n;

	n = N;
	i = ft_countn(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (N < 0)
		n = -n;
	str[i--] = '\0';
	if (n >= 0)
	{
		while (i >= 0)
		{
			str[i--] = (n % 10) + 48;
			n = n / 10;
		}
	}
	if (N < 0)
		*str = '-';
	return (str);
}
/*
int	main(void)
{
	int	n = 2147483647;
	printf("%s\n", ft_itoa(n));
}
*/
