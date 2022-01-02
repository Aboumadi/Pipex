/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:54:56 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/21 17:48:20 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const char *src, size_t n)
{
	int		i;
	char	*dst2;
	char	*src2;

	if ((src == NULL) || (dst == NULL))
		return (NULL);
	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst2 > src)
		while (n--)
			dst2[n] = src2[n];
	else
	{
		i = 0;
		while (n > 0)
		{
			dst2[i] = src2[i];
			i++;
			n--;
		}
	}
	return (dst2);
}
