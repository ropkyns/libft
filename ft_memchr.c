/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:52:42 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/28 18:52:06 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n);

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char * mem;

    mem = (unsigned char *)s;
    while(n)
    {
        if(*mem == (unsigned char)c)
            return(mem);
        mem++;
        n--;
    }
    return (NULL);
}

/* int main()
{
    const void  *s = "ABFDEF";
    int c = 70;
    size_t  n = 6;
    char    *sn;

    sn = ft_memchr(s, c, n);
    printf("Result: %s\n", sn);
    return (0);
} */