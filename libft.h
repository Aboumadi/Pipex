/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:02:34 by aboumadi          #+#    #+#             */
/*   Updated: 2022/01/01 14:03:16 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<unistd.h>
#include<fcntl.h>
#ifndef LIBFT_H
# define LIBFT_H
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t size);
size_t	ft_strlcpy(char *s2, const char *s1, size_t size);
void *	ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char *	ft_strnstr(const char *str, const char *to_find, size_t l);
void *	ft_calloc(size_t l, size_t s);
char *	ft_strdup(const char *src);
char	*ft_substr(char const *src, unsigned int size, size_t l);
char	*ft_strjoin(char const *s, char const *s2);
char	**ft_split(char const *s, char c);
#endif
