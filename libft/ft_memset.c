/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:58:25 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/21 16:58:20 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int c, size_t l)
{
	size_t			i;
	char			*str;
	unsigned char	c2;

	i = 0;
	str = (char *)s;
	c2 = (unsigned char)c;
	if (l != 0)
	{
		while (i < l)
		{
			str[i] = c2;
			i++;
		}
		return (str);
	}
	return (str);
}
