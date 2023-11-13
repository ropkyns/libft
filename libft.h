/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:14:21 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/13 14:14:21 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero.c(void *str, size_t n);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void * ft_memcpy(void * dest, void * src, size_t n);
void * ft_memmove(void * dest, void * src, size_t n);
void * ft_memset (void * pointer, int value, size_t n);
size_t ft_strlcat(char *dst, const char *src, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t lendst);
size_t ft_strlen(char * str);
