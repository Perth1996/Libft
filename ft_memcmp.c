/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plawkiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:00:01 by plawkiat          #+#    #+#             */
/*   Updated: 2022/09/26 13:03:37 by plawkiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				result;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	result = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			result = str1[i] - str2[i];
			break ;
		}
		i++;
	}
	return (result);
}

/*
int main () {
   int ret;

   char s2[] = {0, 0, 127, 0};
   char s3[] = {0, 0, 42, 0};
    
   printf("%d\n", memcmp(s2, s3, 4));
  
   printf("%d\n", ft_memcmp(s2, s3, 4));
   return(0);
}*/
