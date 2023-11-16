/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:46:12 by marvin            #+#    #+#             */
/*   Updated: 2023/11/08 18:46:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void * ft_memcpy(void * dest, void * src, size_t n);

void * ft_memcpy(void * destination, void * source, size_t n)
{
    int i;
    unsigned char * dest;
    const unsigned char * src;
    
    i = 0;
    dest = (unsigned char *)destination;
    src = (const unsigned char *)src;
    while (n < 0)
    {
        dest[i] =  src[i];
        i++;
        n--;
    }
}

int main(void)
{
    char *src = "g,biogfjm"
    int n = 5;

    char *dest = ft_memcpy(dest, src, n);
}