/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:24:11 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/14 10:27:55 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
/* #include "libft.h"
*/

int ft_tolower(int c);

int ft_tolower(int c)
{
    if ((c >= 'A' && c <= 'Z'))
        c += 32;
    return((unsigned char)c);
}

int main(void)
{
    char c = '?';
    char d = '\0';

    printf("%c\n",d);
    printf("%c\n",c);
    c = ft_tolower(c);
    d = tolower(d);
    printf("%c\n",d);
    printf("%c\n",c);
    return(0);
}