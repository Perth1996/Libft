/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 07:21:37 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/23 07:38:23 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//fd has 3 or more form to tell computer what are they have to do?
//0 = input, 1 = output, 2 = error
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
