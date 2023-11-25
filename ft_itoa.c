/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:14:31 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/25 16:08:23 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n);

int intlen(int n)
{
    int len;
    long num;

    len = 0;
    num = n;
    if(n == 0)
        len++;
    if(n < 0)
    {
        len++;
        num = -n;
    }
    while(num > 0)
    {
        num /= 10;
        len++;
    }
    return(len);
}

char *ft_itoa(int n)
{
    int len;
    char * c;
    int neg;
    long num;

    len = intlen(n);
    neg = 0;
    num = n;
    c = malloc(sizeof(char) * (len + 1));
    if(!c)
        return(NULL);
    if(n < 0)
    {
        c[0] = '-';
        num = -n;
        neg = 1;
    }
    c[len+1] = '\0';
    while(len > neg)
    {
        c[len-1] = ((num % 10)+ 48);
        num /= 10;
        len--;
    }
    return(c);
}

int main(void)
{
    int n = -340;
    printf("%s\n", ft_itoa(n));
    return(0);
}