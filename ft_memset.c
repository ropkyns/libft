/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:16:58 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/14 13:12:25 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void * ft_memset (void * pointer, int value, size_t n);

void * ft_memset (void * pointer, int value, size_t n)
{
    char * str;

    str = pointer;
    while (n)
    {
        *str = (unsigned char)value;
        str++;
        n--;
    }
    return (pointer);
}

/* int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_memset(str, '$', 5);
	puts(str);
	return (0);
} */