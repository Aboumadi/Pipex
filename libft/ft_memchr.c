/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:57:58 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/14 14:23:23 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c2;
	unsigned char	*str2;

	i = 0;
	c2 = (char)c;
	str2 = (unsigned char *)s;
	while (i < n)
	{
		if (str2[i] == c2)
		{
			return (str2 + i);
		}
		else
			i++;
	}
	return (0);
}
