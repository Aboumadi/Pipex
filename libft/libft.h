/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:02:34 by aboumadi          #+#    #+#             */
/*   Updated: 2021/11/21 19:04:45 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<unistd.h>
#ifndef LIBFT_H
# define LIBFT_H
int	ft_isalpha(int n);
int	ft_isdigit(int n);
int	ft_isalnum(int n);
int	ft_isascii(int n);
int	ft_isprint(int n);
size_t	ft_strlen(const char *str);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t size);
size_t	ft_strlcpy(char *s2, const char *s1, size_t size);
size_t	ft_strlcat(char *s2, const char *s1, size_t size);
void *	ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void *	ft_memset(void *s, int c, size_t l);
void 	ft_bzero(void *s, size_t l);
void *	ft_memcpy(void *dst, const void *src, size_t n);
int	ft_atoi(const char *str);
char *	ft_strnstr(const char *str, const char *to_find, size_t l);
void *	ft_calloc(size_t l, size_t s);
char *	ft_strdup(const char *src);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_substr(char const *src, unsigned int size, size_t l);
char	*ft_strjoin(char const *s, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(const char *s, char (*f)(unsigned int,char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	*ft_memmove(void *dst, const char *src, size_t n);
char	**ft_split(char const *s, char c);
#endif
