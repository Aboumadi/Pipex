/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:04:12 by aboumadi          #+#    #+#             */
/*   Updated: 2022/01/10 00:55:32 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_substr(char const *src, unsigned int s, size_t len)
{
	unsigned int	i;
	char			*dst;
	unsigned int	j;

	i = 0;
	if (!src)
		return (NULL);
	j = 0;
	while (i < len && src[i++] != '\0')
		j++;
		dst = malloc((j + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < len && (s <= ft_strlen(src)) && (src[i + s] != '\0'))
	{
		dst[i] = src[i + s];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
