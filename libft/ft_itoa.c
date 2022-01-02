/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:13:27 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/14 15:08:38 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_positiv(int n)
{
	int		i;
	char	*t;

	i = count(n);
	t = (char *)malloc((i + 1) * sizeof(char));
	if (t == NULL)
		return (NULL);
	t[i] = '\0';
	i--;
	while (i >= 0)
	{
		t[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (t);
}

char	*ft_negativ(int n)
{
	int		i;
	char	*t;

	i = count(n);
	t = (char *)malloc((i + 1) * sizeof(char));
	if (t == NULL)
		return (NULL);
	t[i] = '\0';
	i--;
	t[0] = '-';
	n *= -1;
	while (i > 0)
	{
		t[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (t);
}

char	*ft_itoa(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		return (ft_negativ(n));
	}
	return (ft_positiv(n));
}
