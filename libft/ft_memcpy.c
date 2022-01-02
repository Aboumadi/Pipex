/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:46:32 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/21 17:31:56 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*src2;
	char	*dst2;

	i = 0;
	if (!src && !dst)
		return (NULL);
	src2 = (char *)src;
	dst2 = (char *)dst;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst2);
}
