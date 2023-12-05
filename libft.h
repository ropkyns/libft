/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:14:21 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/05 14:29:43 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _LIBFT_H_
#define _LIBFT_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	ft_atoi(const char *str);
void ft_bzero(void *str, size_t n);
void *ft_calloc(size_t number, size_t size);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_itoa(int n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void * pointer1, const void * pointer2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void * ft_memset (void * pointer, int value, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char * ft_strchr( const char * string, int searchedChar );
char * ft_strdup(const char *s);
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dst, const char *src, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t lendst);
size_t ft_strlen(const char * str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *first, const char * second, int len);
char * ft_strnstr(const char *big,	const char *little, size_t len);
char * ft_strrchr( const char * string, int searchedChar );
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_toupper (int c);
int ft_tolower(int c);

#endif