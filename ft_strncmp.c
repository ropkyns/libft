/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:09:35 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/26 14:37:05 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int ft_strncmp(const char *first, const char * second, int len);

int ft_strncmp(const char *first, const char * second, int len)
{
    char * f;
    char * s;
    int i;
    
    f = (char *)first;
    s = (char *)second;
    i = 0;
    if(first == NULL || second == NULL)
        return(0);
    while(i < len)
    {
        if(f[i] != s[i])
            return(f[i] - s[i]);
        i++;
    }
    return(0);
}

/* int main(void)
{
    char * chou = "clem";
    char * quette = "ence";

    printf("%d", ft_strncmp(chou, quette, 3));
    return(0);
} */