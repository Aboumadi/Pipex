/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:50:15 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/14 20:52:56 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*s2 == 0)
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] == s1[i + j] && s2[j] != '\0' && i + j < l)
		j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (0);
}
