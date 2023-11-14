/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:09:33 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/14 10:26:56 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
/* #include "libft.h"
 */
int ft_toupper (int c);

int ft_toupper(int c)
{
    if ((c >= 'a' && c <= 'z'))
        c -= 32;
    return((unsigned char)c);
}

int main(void)
{
    char c = '?';
    char d = '\0';

    printf("%c\n",d);
    printf("%c\n",c);
    c = ft_toupper(c);
    d = toupper(d);
    printf("%c\n",d);
    printf("%c\n",c);
    return(0);
}