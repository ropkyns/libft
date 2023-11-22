/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:14:21 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/22 12:08:02 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _LIBFT_H_
#define _LIBFT_H_
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_bzero(void *str, size_t n);
int	ft_atoi(const char *str);
void *calloc(size_t nmemb, size_t size);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void * ft_memchr(const void * mem, int c, size_t n);
int ft_memcmp(const void * pointer1, const void * pointer2, size_t n);
void * ft_memcpy(void * dest, void * src, size_t n);
void * ft_memmove(void * dest, void * src, size_t n);
void * ft_memset (void * pointer, int value, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char * ft_strchr(const char * str, int c);
void ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t ft_strlcat(char *dst, const char *src, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t lendst);
size_t ft_strlen(const char * str);
char * ft_strnstr(const char * big, const char * lil, size_t len);
char * ft_strrchr(const char * str, int c);
int ft_toupper (int c);
int ft_tolower(int c);

#endif