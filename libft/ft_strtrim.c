/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:22:46 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/20 14:14:38 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_campare(char c, char const *set)
{
	int	i;

	i = 0;
	while (c != set[i] && set[i] != '\0')
		i++;
	if (c == set[i])
		return (1);
	return (0);
}

int	first_index(char const *str, char const *set)
{
	int	i;

	i = 0;
	while ((ft_campare(str[i], set) == 1) && (str[i] != '\0'))
		i++;
	return (i);
}

int	last_index(char const *str, char const *set)
{
	int	i;

	i = ft_strlen(str) - 1;
	while ((ft_campare(str[i], set) == 1) && (i >= first_index(str, set)))
		i--;
	return (i);
}

char	*ft_null(void)
{
	char	*s;

	s = (char *)malloc(sizeof (char));
	if (!s)
		return (NULL);
	s[0] = '\0';
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*newstring;

	if (!set)
		return ((char *)s1);
	if (!s1)
		return (NULL);
	start = first_index(s1, set);
	end = last_index(s1, set);
	if (start > end)
		return (ft_null());
	newstring = (char *)malloc ((end - start + 2) * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		newstring[i++] = s1[start++];
	newstring[i] = '\0';
	return (newstring);
}
