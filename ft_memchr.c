/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:52:42 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/14 15:39:06 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void * ft_memchr(const void * mem, int c, size_t n);

void * ft_memchr(const void * mem, int c, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        if(*(unsigned char *)mem + i == (unsigned char)c)
            return((unsigned char *)mem + i);
        i++;
    }
    return (NULL);
}

int main()
{
    const void  *s = "ABFDEF";
    int c = 70;
    size_t  n = 6;
    char    *sn;

    sn = ft_memchr(s, c, n);
    printf("Result: %s\n", sn);
    return (0);
}