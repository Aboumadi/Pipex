/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:15:45 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/14 14:27:56 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t s)
{
	size_t		i;
	size_t		src_lengh;
	size_t		dst_lengh;
	size_t		j;
	size_t		t;

	i = 0;
	src_lengh = ft_strlen(src);
	dst_lengh = ft_strlen(dst);
	j = dst_lengh;
	t = s - dst_lengh;
	if (s > dst_lengh)
	{
		while (src[i] && (t - 1) > 0)
		{
			dst[dst_lengh] = src[i];
			i++;
			dst_lengh++;
			t--;
		}
		dst[dst_lengh] = '\0';
		return (j + src_lengh);
	}
	return (src_lengh + s);
}
