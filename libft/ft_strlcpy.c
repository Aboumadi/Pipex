/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:25:19 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/21 15:42:26 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *s2, const char *s1, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[j] != '\0')
		j++;
	i = 0;
	if (n > 0)
	{
		while (s1[i] != '\0' && i < n - 1)
		{
			s2[i] = s1[i];
			i++;
		}
		s2[i] = '\0';
	}
	return (j);
}
/*int main()
{
	char *str1;
	char str2[10];
	printf("%lu\n", ft_strlcpy(str2, str1, 0), strlcpy(str2, str1, 0));
}*/
