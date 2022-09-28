/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:17:56 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/28 14:38:18 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	integer;
	long long	i;
	long long	neg;

	i = 0;
	integer = 0;
	neg = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
		integer = (integer * 10) + (str[i++] - '0');
	if (neg == 1)
		return (-integer);
	return (integer);
}
/*
int	main(void)
{
	char	*i = "-12";
	printf ("%d", ft_atoi(i));
}*/
