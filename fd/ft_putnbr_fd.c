/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 07:52:01 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/26 13:44:19 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	nbr[12];

	i = -1;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	while (n > 0)
	{
		nbr[++i] = (n % 10) + '0';
		n /= 10;
	}
	while (i >= 0)
		write (fd, &nbr[i--], 1);
}
