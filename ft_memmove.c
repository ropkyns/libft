/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:37:56 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/09 14:56:46 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void * ft_memmove(void * dest, void * src, size_t n);

void * ft_memmove(void * dest, void * src, size_t n)
{
    char * d;
    char * s;
    size_t i;

    d = dest;
    s = src;
    i = 0;
    if (d > s)
    {
        while(n)
        {
            d[n] = s[n];
            n--;
        }
    }
    else
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}

/*int main(void)
{
    char src[50];
    char dst[50];
	strcpy(src, "This is string.h library function");
	puts(src);
	ft_memmove(dst, src, 5);
	puts(dst);
	return (0);
}*/
